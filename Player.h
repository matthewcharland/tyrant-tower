// Player.h

#pragma once
#include <string>
using namespace std;
class Player
{
public: 
	Player();
	~Player();
	
	int getHealth();
	int getAgility();
	int getStrength();
	int getKeyAmount();
	int getMoney();
	int getDefense();

	void setHealth(int healthIn);
	void setAgility(int agilityIn);
	void setStrength(int strengthIn);
	void setKeyAmount(int keyAmountIn);
	void setMoney(int moneyIn);
	void setDefense(int defenseIn);
	
	void eatFood(string foodIn);

private:
	int health;
	string backpackInventory[4];
	int agility;
	int strength;
	int keyAmount;
	int money;
	int defense;
};




