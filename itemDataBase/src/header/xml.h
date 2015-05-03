#include "item.h"
#include "Weapon.h"
#include "Armor.h"

//add function
void addItem();
void addWeapon();
void addArmor();

//Menu function
void deleteItemMenu();
void deleteArmorMenu();
void deleteWeaponMenu();
void modifyItemMenu();
void modifyArmorMenu();
void modifyWeaponMenu();

//Delete function
void deleteItemCode(std::string code);
void deleteItemName(std::string code);
void deleteArmorCode(std::string code);
void deleteArmorName(std::string code);
void deleteWeaponCode(std::string code);
void deleteWeaponName(std::string code);

//Modify function
void modifyItemCode(std::string code);
void modifyItemName(std::string name);
void modifyArmorCode(std::string code);
void modifyArmorName(std::string name);
void modifyWeaponCode(std::string code);
void modifyWeaponName(std::string name);