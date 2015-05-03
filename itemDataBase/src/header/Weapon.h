#include "item.h"

#pragma once
class Weapon : public Item
{
private:
	std::string weaponType;

	bool mod;
	int	damage;

	int longRange;
	int shortRange;

	std::string attribute;

public:
	//Constructeur/Destructeur
	Weapon();
	Weapon(const std::string& rarity, const std::string& name, const std::string& type, const std::string& att, bool mod, int code = 0, int dim = 0, int cr = 0, int pe = 0, int sc = 0, int dam = 0, int lr = 0, int sr = 0);
	virtual ~Weapon();
	
	//Operator
	Weapon& operator=(const Weapon& c)
	{
		name = c.name;
		crowns = c.crowns;
		penny = c.penny;
		schil = c.schil;
		dim = c.dim;
		rarity = c.rarity;
		weaponType = c.weaponType;
		mod = c.mod;
		damage = c.damage;
		longRange = c.longRange;
		shortRange = c.shortRange;
		return *this;
	}
	bool estEgal(const Weapon& b) const;

	//Access fonction & Modify fonction
	void modifyType(const std::string& t);
	std::string getType() const;
	void modifyAtt(const std::string& att);
	std::string getAtt() const;
	void switchMod(bool val);
	bool getMod() const;
	void modifyDam(int i);
	int getDamage() const;
	void modifyRange(int lr, int sr);
	int getShortRange() const;
	int getLongRange() const;

	//Write & Read an XML DB
	virtual void saveItem();
	virtual void readItem(std::ifstream& flux); //TODO : Adapt to XML

	virtual void afficheItem(std::ostream& flux) const;
};

//Operator
bool operator==(Weapon a, Weapon b);
bool operator!=(Weapon a, Weapon b);
std::ostream& operator<<(std::ostream& flux, const Weapon& i);