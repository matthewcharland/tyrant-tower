#include "Player.h"
#include "prototype.h"
#include <iostream>


Player::Player()
{
	health = 100;
	money = 50;
	keyAmount = 0;
	agility = 5;
	strength = 5;
	defense = 10;
	location = "farmLocation";
}

Player::~Player()
{

}

// functions to get stats
int Player::getHealth()
{
	return health;
}

int Player::getAgility()
{
	return agility;
}

int Player::getStrength()
{
	return strength;
}

int Player::getMoney()
{
	return money;
}

int Player::getKeyAmount()
{
	return keyAmount;
}

int Player::getDefense()
{
	return defense;
}