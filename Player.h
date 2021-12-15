#pragma once
#include <string>
using namespace std;
// Header file worked on by Spencer Hess
class Player
{
public: 
	Player();
	~Player();
	
	// Functions to get current amounts
	int getHealth();
	int getAgility();
	int getStrength();
	int getKeyAmount();
	int getMoney();
	int getDefense();

	// Functions to set stats 
	void setHealth(int healthIn);
	void setAgility(int agilityIn);
	void setStrength(int strengthIn);
	void setKeyAmount(int keyAmountIn);
	void setMoney(int moneyIn);
	void setDefense(int defenseIn);
	
	// Functions to Eat Food and Run
	void eatFood(string foodIn);
	void startRun(string runIn);

	// Functions to get Weapon Column and Row for another file
	int getWeaponColumn();
	int getWeaponRow();

	// Functions to set Weapon Column and Row for another file
	void setWeaponColumn(int weaponColIn);
	void setWeaponRow(int weaponRowIn);

	// Functions to get People Column and Row for another file
	int getPeopleColumn();
	int getPeopleRow();

	// Functions to set People Column and Row for another file
	void setPeopleColumn(int peopleColIn);
	void setPeopleRow(int peopleRowIn);

private:
	// Variables holding values for beginning Health, Agility, Strength, Keys, Money, Defense
	int health;
	string backpackInventory[4];
	int agility;
	int strength;
	int keyAmount;
	int money;
	int defense;
	int weaponCol;
	int weaponRow;
	int peopleCol;
	int peopleRow;
};




