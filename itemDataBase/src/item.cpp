#include "item.h"
#include <vector>
#include <string.h>

//For saveItem
#define CODE_CHECKING_ITEM "/itemDataBase/item[@code=\""

using namespace std;
//Constructeur/Destructeur
Item::Item(string nameBuffer, string codeBuffer, int rar, int dim, int cr, int pe, int sc) : crowns(cr), dim(dim), penny(pe), schil(sc)
{

}
Item::Item() : crowns(0), dim(0), penny(0), schil(0)
{

}
Item::~Item()
{

}

//Access fonction & Modify fonction
void Item::modifyCode(const string& buffer)
{
	code = buffer;
}
string Item::getCode() const
{
	return code;
}
void Item::modifyName(const string& buffer)
{
	name = buffer;
}
string Item::getName() const
{
	return name;
}
void Item::modifyPrice(int cr, int pe, int sc)
{
	//Calcul with conversion of money between schilings, penny and crows.
	schil += sc;

	penny += (schil / 12 + pe);
	schil %= 20;

	crowns += (penny / 12 + cr);
	penny %= 12;
}
int Item::getCrown() const
{
	return crowns;
}
int Item::getPenny() const
{
	return penny;
}
int Item::getSchiling() const
{
	return schil;
}
void Item::modifyDim(int i)
{
	dim = i;
}
int Item::getDimension() const
{
	return dim;
}
void Item::modifyRarity(int r)
{
	rarity = r;
}
int Item::getRarity() const
{
	return rarity;
}

//Write & Read an XML DB.
void Item::saveItem()
{
	pugi::xml_document doc; //Doc root
	pugi::xml_parse_result result = doc.load_file("itemDB.xml"); //Result of doc load.
	pugi::xml_attribute attribute; //Use for attribute.

	//buffer
	char buffer[50];

	//Test if file is open.
	if (!result) //Test if XML file is open.
	{
		cout << "Resultat : " << result.description() << endl; //Bug return.
	}
	else
	{
		//itemDataBase node.
		pugi::xml_node node = doc.first_child();
		//Test the existence of itemDataBase node, added if it doesn't exist.
		if (node == NULL)
		{
			node.append_child("itemDataBase");
			attribute = node.append_attribute("xmlns:xsi=");
			attribute.set_value("http://www.w3.org/2001/XMLSchema-instance\\");
			attribute = node.append_attribute("xsi:noNamespaceSchemaLocation");
			attribute.set_value("itemDB.xsd");
		}
		//Test the name of node to modify it if it's necessary.
		if (doc.name() != "itemDataBase")
		{
			doc.set_name("itemDataBase");
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
			attribute.set_value("itemDB.xsd");
		}
		
		//Test uniqueness of code.
		string query(CODE_CHECKING_ITEM);
		try
		{
			pugi::xpath_node codeCheckNode = doc.select_node(query.append(getCode().append("\"]")).c_str());

			while (codeCheckNode)
			{
				cout << "Erreur : Code Déjà Existant." << endl << "Veuillez rentrez un nouveau code" << endl;
				cin >> buffer;
				code = buffer;
				query = CODE_CHECKING_ITEM;
				codeCheckNode = doc.select_node(query.append(getCode().append("\"]")).c_str());
			}
			//add item node with code attribute.
			node.append_child("item").append_attribute("code").set_value(getCode().c_str());

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
		}
		catch (const pugi::xpath_exception& e)
		{
			cout << "Exception : " << e.what() << endl;
		}
	}
	//save file.
	doc.save_file("itemDB.xml");
	}
void Item::readItem(ifstream& flux)
{
	//TODO : with XML file.
}

void Item::afficheItem(ostream& flux) const
{
	flux << "Code : " << code << endl;
	flux << "Nom : " << name << endl;
	flux << "Prix : " << crowns << "co " << penny << "pa" << schil << "so" << endl;
	flux << "Encombrement : " << dim << endl;
	flux << "Rareté : " << rarity << endl;
}

//Operator
bool operator==(const Item& a, const Item& b)
{
	return a.estEgal(b);
}
bool operator!=(const Item& a, const Item& b)
{
	return !(a.estEgal(b));
}
bool Item::estEgal(const Item& b) const
{
	return code == b.code;
}