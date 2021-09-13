#pragma once
#include <string>
using namespace std;
class Player
{
public: 
	Player();
	~Player();


private:
	int health;
	string backpackInventory[4];
	int agility;
	int strength;
	int keyAmount;
	int money;
};




