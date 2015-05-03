#include "Weapon.h"

using namespace std;
#define CODE_CHECKING_WEAPON "/weaponDB/weapon[@code=\""


//Constructeur/Builder
Weapon::Weapon() : Item("Sérieux ?", "Main Nues"), weaponType("Armes Ordinaires"), mod(true), damage(-4), longRange(0), shortRange(0), attribute("Spéciale")
{
}
Weapon::Weapon(const string& rarity, const string& name, const string& type, const string& att, bool mod, int code, int dim, int cr, int pe, int sc, int dam, int lr, int sr) : Item(rarity, name, code, dim, cr, pe, sc), weaponType(type), attribute(att), mod(mod), damage(dam), longRange(lr), shortRange(sr)
{

}
Weapon::~Weapon()
{
}

//Access fonction & Modify fonction
void Weapon::modifyType(const string& t)
{
	weaponType = t;
}
string Weapon::getType() const
{
	return weaponType;
}
void Weapon::modifyAtt(const string& att)
{
	attribute = att;
}
string Weapon::getAtt() const
{
	return attribute;
}
void Weapon::switchMod(bool val)
{
	mod = val;
}
bool Weapon::getMod() const
{
	return mod;
}
void Weapon::modifyDam(int i)
{
	damage = i;
}
int Weapon::getDamage() const
{
	return damage;
}
void Weapon::modifyRange(int lr, int sr)
{
	longRange = lr;
	shortRange = sr;
}
int Weapon::getShortRange() const
{
	return shortRange;
}
int Weapon::getLongRange() const
{
	return longRange;
}

//Write & read an XML DB
void Weapon::saveItem()
{
	pugi::xml_document doc; //Doc root
	pugi::xml_parse_result result = doc.load_file("weaponDB.xml"); //Result of load doc.
	pugi::xml_attribute attribute; //Use for attribute.

	//buffer.
	char buffer[50];
	string buffer2;

	//Test if file is open.
	if (!result) //Test if XML file is open.
	{
		cout << "Resultat : " << result.description() << endl; //Bug return.
	}
	else
	{
		//weaponDB node.
		pugi::xml_node node = doc.first_child();
		//Test the existence of weaponDB node, added if it doesn't exist.
		if (node == NULL)
		{
			node.append_child("weaponDB");
			attribute = node.append_attribute("xmlns:xsi=");
			attribute.set_value("http://www.w3.org/2001/XMLSchema-instance\\");
			attribute = node.append_attribute("xsi:noNamespaceSchemaLocation");
			attribute.set_value("WeaponDB.xsd");
		}
		//Test the name of node to modify it if it's necessary.
		if (doc.name() != "weaponDB")
		{
			doc.set_name("weaponDB");
		}

		//xmlns:xsi attribute
		attribute = node.first_attribute();
		//Test if it is the good attribute.
		if (attribute.name() != "xmlns:xsi")
		{
			attribute.set_name("xmlns:xsi");
			attribute.set_value("http://www.w3.org/2001/XMLSchema-instance\\");
		}

		//xsi:noNamespaceSchemaLocation attribute
		attribute = attribute.next_attribute();
		//Test if it the good attribute
		if (attribute.name() != "xsi:noNamespaceSchemaLocation")
		{
			attribute.set_name("xsi:noNamespaceSchemaLocation");
			attribute.set_value("WeaponDB.xsd");
		}

		//Test uniqueness of code.
		string query(CODE_CHECKING_WEAPON);
		try
		{
			pugi::xpath_node codeCheckNode = doc.select_node(query.append(getCode().append("\"]")).c_str());

			while (codeCheckNode)
			{
				cout << "Erreur : Code Déjà Existant." << endl << "Veuillez rentrez un nouveau code" << endl;
				cin >> code;
				query = CODE_CHECKING_WEAPON;
				codeCheckNode = doc.select_node(query.append(getCode().append("\"]")).c_str());
			}
			//Add item node with code attribute
			node.append_child("weapon").append_attribute("code").set_value(getCode().c_str());

			//name node.
			node = node.last_child();
			node = node.append_child("name");
			node = node.append_child(pugi::node_pcdata);
			node.set_value(getName().c_str());

			//crown node.
			node = node.parent().parent();
			node = node.append_child("crown");
			node = node.append_child(pugi::node_pcdata);
			itoa(getCrown(), buffer, 10);
			node.set_value(buffer);

			//penny node.
			node = node.parent().parent();
			node = node.append_child("penny");
			node = node.append_child(pugi::node_pcdata);
			itoa(getPenny(), buffer, 10);
			node.set_value(buffer);

			//schiling node.
			node = node.parent().parent();
			node = node.append_child("schiling");
			node = node.append_child(pugi::node_pcdata);
			itoa(getSchiling(), buffer, 10);
			node.set_value(buffer);

			//dimension node
			node = node.parent().parent();
			node = node.append_child("dimension");
			node = node.append_child(pugi::node_pcdata);
			itoa(getDimension(), buffer, 10);
			node.set_value(buffer);

			//rarity node.
			node = node.parent().parent();
			node = node.append_child("rarity");
			node = node.append_child(pugi::node_pcdata);
			itoa(getRarity(), buffer, 10);
			node.set_value(buffer);

			//weaponType node.
			node = node.parent().parent();
			node = node.append_child("weaponType");
			node = node.append_child(pugi::node_pcdata);
			node.set_value(getType().c_str());

			//damage node.
			node = node.parent().parent();
			node.append_child("damage").append_attribute("mod").set_value(mod);
			node = node.child("damage");
			node = node.append_child(pugi::node_pcdata);
			itoa(getDamage(), buffer, 10);
			node.set_value(buffer);

			//shortRange node.
			node = node.parent().parent();
			node = node.append_child("shortRange");
			node = node.append_child(pugi::node_pcdata);
			itoa(getShortRange(), buffer, 10);
			node.set_value(buffer);

			//longRange node.
			node = node.parent().parent();
			node = node.append_child("longRange");
			node = node.append_child(pugi::node_pcdata);
			itoa(getLongRange(), buffer, 10);
			node.set_value(buffer);

			//attribute node.
			node = node.parent().parent();
			node = node.append_child("attribute");
			node = node.append_child(pugi::node_pcdata);
			node.set_value(getAtt().c_str());
		}
		catch (const pugi::xpath_exception& e)
		{
			cout << "Exception : " << e.what() << endl;
		}
	}
	//save file.
	doc.save_file("weaponDB.xml");
}
void Weapon::readItem(ifstream& flux)
{
	//TODO : With XML file.
}

void Weapon::afficheItem(ostream& flux) const
{
	Item::afficheItem(flux);
	flux << "Groupe d'Arme : " << weaponType << endl;
	if (mod)
	{
		if (damage < 0)
		{
			flux << "Dégâts : BF" << damage << endl;
		}
		else if (damage == 0)
		{
			flux << "Dégâts : BF" << endl;
		}
		else
		{
			flux << "Dégâts : BF+" << damage << endl;
		}
	}
	else flux << "Dégâts : " << damage << endl;
	flux << "Portée : " << shortRange << "/" << longRange << endl;
	flux << "Attribut" << attribute << endl;
}

//Operator
bool operator==(const Weapon& a, const Weapon& b)
{
	return a.estEgal(b);
}
bool operator!=(const Weapon& a, const Weapon& b)
{
	return !(a.estEgal(b));
}
bool Weapon::estEgal(const Weapon& b) const
{
	return Item::estEgal(b);
}

//stream
ostream& operator<<(ostream& flux, const Weapon& i)
{
	i.afficheItem(flux);
	return flux;
}