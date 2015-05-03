#include <string>
#include <iostream>
#include <fstream>
#include "pugixml.hpp"
#include "pugiconfig.hpp"

#pragma once

class Item
{
protected:
	std::string code;

	std::string name;

	int crowns, penny, schil, dim;

	int rarity;

public:
	//Constructeur/Destructeur
	Item();
	Item(std::string nameBuffer, std::string codeBuffer,int rar = 0, int dim = 0, int cr = 0, int pe = 0, int sc = 0);
	virtual ~Item();
	
	//Operator
	Item& operator=(const Item& c)
	{
		name = c.name;
		crowns = c.crowns;
		penny = c.penny;
		schil = c.schil;
		dim = c.dim;
		rarity = c.rarity;
		return *this;
	}
	bool estEgal(const Item& b) const;

	//Access fonction & Modify fonction
	void modifyCode(const std::string& buffer);
	std::string getCode() const;
	void modifyName(const std::string& buffer);
	std::string getName() const;
	void modifyPrice(int cr, int pe, int sc);
	int getCrown() const;
	int getPenny() const;
	int getSchiling() const;
	void modifyDim(int i);
	int getDimension() const;
	void modifyRarity(int r);
	int getRarity() const;

	//Write & Read an XML DB
	virtual void saveItem();
	virtual void readItem(std::ifstream& flux); //TODO : Adapt to XML

	virtual void afficheItem(std::ostream& flux) const;
};

//Operator
bool operator==(const Item& a, const Item& b);
bool operator!=(const Item& a, const Item& b);

std::ostream& operator<<(std::ostream& flux, const Item& a);