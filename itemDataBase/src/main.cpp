#include <iostream>
#include <cstdio>
#include "item.h"
#include "xml.h"

using namespace std;

int main()
{
	int option = 0;
	while (option != 4)
	{
		cout << "Menu :" << endl;
		cout << "1. Ajouter un Objet." << endl;
		cout << "2. Ajouter une Arme" << endl;
		cout << "3. Ajouter une Armure." << endl;
		cout << "4. Quitter." << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			addItem();
			break;
		case 2:
			addWeapon();
			break;
		case 3:
			addArmor();
			break;
		default:
			break;
		}
	}
	system("PAUSE");
	return 0;
}