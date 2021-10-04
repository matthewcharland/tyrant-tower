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


	string location;

private:
	int health;
	string backpackInventory[4];
	int agility;
	int strength;
	int keyAmount;
	int money;
	int defense;
};




