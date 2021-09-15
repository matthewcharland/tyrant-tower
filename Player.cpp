#include "Player.h"
#include <iostream>


//constructer and destructer 
Player::Player()
{
	health = 100;
	money = 50;
	keyAmount = 0;
	agility = 5;
	strength = 5;
	defense = 10;
}

Player::~Player()
{

}

// functions to get values
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

// functions to set value

void Player::setHealth(int healthIn)
{
	health = healthIn;
}

void Player::setAgility(int agilityIn)
{
	agility = agilityIn;
}

void Player::setStrength(int strengthIn)
{
	strength = strengthIn;
}

void Player::setKeyAmount(int keyAmountIn)
{
	keyAmount = keyAmountIn;
}

void Player::setMoney(int moneyIn)
{
	money = moneyIn;
}

void Player::setDefense(int defenseIn)
{
	defense = defenseIn;
}