#include "item.h"

#pragma once
class Armor : public Item
{
private:
	int area;
	/*
	0: Set  | 1: Head | 2: Arms
	3: Body | 4: Legs
	*/
	
	int PA;
	int malMvt;
	int malAg;

public:
	//Constructeur/Destructeur
	Armor();
	Armor(std::string nameBuffer, std::string codeBuffer, int rar = 0, int dim = 0, int cr = 0, int pe = 0, int sc = 0, int a = 0, int PA = 0, int mv = 0, int ma = 0);
	virtual ~Armor();
	
	//Operator
	Armor& operator=(const Armor& c)
	{
		name = c.name;
		crowns = c.crowns;
		penny = c.penny;
		schil = c.schil;
		dim = c.dim;
		rarity = c.rarity;
		area = c.area;
		PA = c.PA;
		malMvt = c.malMvt;
		malAg = c.malAg;
		return *this;
	}

	//Access fonction & Modify fonction
	int getArea() const;
	void modifyArea(int value);
	int getMalus(int type) const;
	void modifyMalus(int type, int value);
	int getPA() const;
	void modifyPA(int value);

	//Write & Read an XML DB
	void saveItem(); //TODO : Adapt to XML
	void loadItem(); //TODO : Adapt to XML

	//Print fonction
	virtual void afficheItem(std::ostream& flux) const;
};

bool operator==(const Armor& a, const Armor& b);
bool operator!=(const Armor& a, const Armor& b);
std::ostream& operator<<(std::ostream& flux, const Armor& a);