#include "item.h"
using namespace std;

//Add function
void addItem()
{
	Item iToAdd;

	//To load the iostream.
	string buffer;
	int cr, pe, sc;

	//input of the attribute of item
	cout << "Ajouter un objet." << endl;
	cout << "Code (Type I-XXX) :" << endl;
	cin >> buffer;
	iToAdd.modifyCode(buffer);
	buffer.clear();
	cout << "Nom :" << endl;
	cin >> buffer;
	iToAdd.modifyName(buffer);
	cout << "Courrone :" << endl;
	cin >> cr;
	cout << "Pistole d'Argent :" << endl;
	cin >> pe;
	cout << "Sous :" << endl;
	cin >> sc;
	iToAdd.modifyPrice(cr, pe, sc);
	cout << "Encombrement :" << endl;
	cin >> cr;
	iToAdd.modifyDim(cr);
	cout << "Disponibilité :" << endl;
	cin >> cr;
	iToAdd.modifyRarity(cr);

	
	iToAdd.saveItem();
}
void addWeapon()
{
	Weapon wToAdd;

	//To load the iostream.
	string buffer;
	int cr, pe, sc;

	//input of the attribute of weapon
	cout << "Ajouter un arme." << endl;
	cout << "Code (Type W-XXX) :" << endl;
	cin >> buffer;
	wToAdd.modifyCode(buffer);
	buffer.clear();
	cout << "Nom :" << endl;
	cin >> buffer;
	wToAdd.modifyName(buffer);
	cout << "Courrone :" << endl;
	cin >> cr;
	cout << "Pistole d'Argent :" << endl;
	cin >> pe;
	cout << "Sous :" << endl;
	cin >> sc;
	wToAdd.modifyPrice(cr, pe, sc);
	cout << "Encombrement :" << endl;
	cin >> cr;
	wToAdd.modifyDim(cr);
	cout << "Disponibilité :" << endl;
	cin >> cr;
	wToAdd.modifyRarity(cr);
	buffer.clear();
	cout << "Groupe D'Arme :" << endl;
	cin >> buffer;
	wToAdd.modifyType(buffer);
	buffer.clear();
	cout << "Type BF+X ?" << endl;
	cin >> cr;
	wToAdd.switchMod(cr?true:false);
	cout << "Dégat :" << endl;
	cin >> cr;
	wToAdd.modifyDam(cr);
	cout << "Longue Portée :" << endl;
	cin >> cr;
	cout << "Courte Portée :" << endl;
	cin >> pe;
	wToAdd.modifyRange(cr, pe);
	cout << "Attribute" << endl;
	cin >> buffer;
	wToAdd.modifyAtt(buffer);

	wToAdd.saveItem();
}
void addArmor()
{
	Armor aToAdd;

	//To load the iostream.
	string buffer;
	int cr, pe, sc;

	//input of the attribute of item
	cout << "Ajouter un objet." << endl;
	cout << "Code (Type I-XXX) :" << endl;
	cin >> buffer;
	aToAdd.modifyCode(buffer);
	buffer.clear();
	cout << "Nom :" << endl;
	cin >> buffer;
	aToAdd.modifyName(buffer);
	cout << "Courrone :" << endl;
	cin >> cr;
	cout << "Pistole d'Argent :" << endl;
	cin >> pe;
	cout << "Sous :" << endl;
	cin >> sc;
	aToAdd.modifyPrice(cr, pe, sc);
	cout << "Encombrement :" << endl;
	cin >> cr;
	aToAdd.modifyDim(cr);
	cout << "Disponibilité :" << endl;
	cin >> cr;
	aToAdd.modifyRarity(cr);
	cout << "Zone :" << endl;
	cin >> cr;
	aToAdd.modifyArea(cr);
	cout << "Point d'Armure :" << endl;
	cin >> cr;
	aToAdd.modifyPA(cr);
	cout << "Quel type de Malus ?" << endl;
	cin >> cr;
	switch (cr)
	{
	case 0:
		cout << "Aucun Malus." << endl;
		break;
	case 1:
		cout << "Malus d'Agilité :" << endl;
		cin >> cr;
		aToAdd.modifyMalus(1, cr);
		break;
	case 2:
		cout << "Malus de Mouvement" << endl;
		cin >> cr;
		aToAdd.modifyMalus(2, cr);
		break;
	default:
		break;
	}

	aToAdd.saveItem();
}

//Menu function
void deleteItemMenu()
{
	int option(0);
	string buffer;
	while (option != 3)
	{
		cout << "Supprimer un objet : " << endl;
		cout << "1. Suppression par code." << endl;
		cout << "2. Suppression par nom." << endl;
		cout << "3. Retour au menu principal." << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Entrez le code : ";
			cin >> buffer;
			deleteItemCode(buffer);
			buffer.clear();
			break;
		case 2:
			cout << "Entrez le nom : ";
			cin >> buffer;
			deleteItemName(buffer);
			buffer.clear();
		default:
			break;
		}
	}
} 
void deleteArmorMenu()
{
	int option(0);
	string buffer;
	while (option != 3)
	{
		cout << "Supprimer une armure/piece d'armure : " << endl;
		cout << "1. Suppression par code." << endl;
		cout << "2. Suppression par nom." << endl;
		cout << "3. Retour au menu principal." << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Entrez le code : ";
			cin >> buffer;
			deleteArmorCode(buffer);
			buffer.clear();
			break;
		case 2:
			cout << "Entrez le nom : ";
			cin >> buffer;
			deleteArmorName(buffer);
			buffer.clear();
		default:
			break;
		}
	}
}
void deleteWeaponMenu()
{
	int option(0);
	string buffer;
	while (option != 3)
	{
		cout << "Supprimer une arme : " << endl;
		cout << "1. Suppression par code." << endl;
		cout << "2. Suppression par nom." << endl;
		cout << "3. Retour au menu principal." << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Entrez le code : ";
			cin >> buffer;
			deleteWeaponCode(buffer);
			buffer.clear();
			break;
		case 2:
			cout << "Entrez le nom : ";
			cin >> buffer;
			deleteWeaponName(buffer);
			buffer.clear();
		default:
			break;
		}
	}
}
void modifyItemMenu()
{
	int option(0);
	string buffer;
	while (option != 3)
	{
		cout << "Modification d'un objet : " << endl;
		cout << "1. Modification par code." << endl;
		cout << "2. Modification par nom." << endl;
		cout << "3. Retour au menu principal." << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Entrez le code : ";
			cin >> buffer;
			modifyItemCode(buffer);
			buffer.clear();
			break;
		case 2:
			cout << "Entrez le nom : ";
			cin >> buffer;
			modifyItemName(buffer);
			buffer.clear();
		default:
			break;
		}
	}
}
void modifyArmorMenu()
{
	int option(0);
	string buffer;
	while (option != 3)
	{
		cout << "Modification d'une armure/piece d'armure : " << endl;
		cout << "1. Modification par code." << endl;
		cout << "2. Modification par nom." << endl;
		cout << "3. Retour au menu principal." << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Entrez le code : ";
			cin >> buffer;
			modifyArmorCode(buffer);
			buffer.clear();
			break;
		case 2:
			cout << "Entrez le nom : ";
			cin >> buffer;
			modifyArmorName(buffer);
			buffer.clear();
		default:
			break;
		}
	}
}
void modifyWeaponMenu()
{
	int option(0);
	string buffer;
	while (option != 3)
	{
		cout << "Modification d'une arme : " << endl;
		cout << "1. Modification par code." << endl;
		cout << "2. Modification par nom." << endl;
		cout << "3. Retour au menu principal." << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Entrez le code : ";
			cin >> buffer;
			modifyWeaponCode(buffer);
			buffer.clear();
			break;
		case 2:
			cout << "Entrez le nom : ";
			cin >> buffer;
			modifyWeaponName(buffer);
			buffer.clear();
		default:
			break;
		}
	}
}

//Delete function
void deleteItemCode(string code)
{

}
void deleteItemName(string name);
void deleteArmorCode(string code);
void deleteArmorName(string name);
void deleteWeaponCode(string code);
void deleteWeaponName(string name);

//Modify function
void modifyItemCode(string code);
void modifyItemName(string name);
void modifyArmorCode(string code);
void modifyArmorName(string name);
void modifyWeaponCode(string code);
void modifyWeaponName(string name);