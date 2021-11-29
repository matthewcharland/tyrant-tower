#include "Player.h"
#include <iostream>


//constructer and destructer 
Player::Player()
{
	health = 200;
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

int Player::getWeaponColumn()
{
	return weaponCol;
}

int Player::getWeaponRow()
{
	return weaponRow;
}

int Player::setPeopleColumn()
{
	return peopleCol;
}

int Player::setPeopleRow()
{
	return peopleRow;
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

void Player::setWeaponColumn(int weaponColIn)
{
	weaponCol = weaponColIn;
}

void Player::setWeaponRow(int weaponRowIn)
{
	weaponRow = weaponRowIn;
}

void Player::setPeopleColumn(int peopleColIn)
{
	peopleCol = peopleColIn;
}

void Player::setPeopleRow(int peopleRowIn)
{
	peopleRow = peopleRowIn;
}
// Eat functions for food

void Player::eatFood(string foodIn) 
{
	switch (foodIn[0])
	{
	case 'S': // Steak
	case 's':
		if (foodIn[1] == 'T' || foodIn[1] == 't')
			health = health + 25;
		else if (foodIn[1] == 'O' || foodIn[1] == 'o') // Soup
			health += 30;
		else // Spinach
			health += 5;
		break;
	case 'F': // Fish
	case 'f':
		if (foodIn[1] == 'I' || foodIn[1] == 'i')
			health += 20;
		break;
	case 'P': // Pork
	case 'p':
		health += 20;
		break;
	case 'T': // Tomato
	case 't':
		health += 5;
	case 'C': // Corn
	case 'c':
		if (foodIn[1] == 'O' || foodIn[1] == 'o')
			health += 5;
		else if (foodIn[1] == 'A' || foodIn[1] == 'a') // Carrot
			health += 5;
		else // Chicken
			health += 25;
	case 'B': // Bread
	case 'b':
		health += 15;
	case 'R': // Rabbit
	case 'r':
		health += 5;
		agility += 10;
	default: // Anything not mentioned
		health += 1;
		break;
	}
}
