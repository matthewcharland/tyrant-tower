#include "Player.h"
#include <iostream>


//constructer and destructer 
//worked on by Spencer Hess
Player::Player()
{
	health = 200; // Starting player health
	money = 50; // Starting money
	keyAmount = 0; // Starting key amount (Keys are for unlocking gates)
	agility = 5; // Starting agility amount
	strength = 5; // Starting strength amount
	defense = 10; // Starting defense amount 
}
// Agility determines chance to dodge/block/parry an attack
// Strength determines bonus damage on melee weapons
// Defense is the amount of damage that is reduced from hits

Player::~Player()
{

}

// functions to get values
// worked on by Spencer Hess
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

int Player::getPeopleColumn()
{
	return peopleCol;
}

int Player::getPeopleRow()
{
	return peopleRow;
}

// functions to set value
// worked on by Spencer Hess

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
// Worked on by Spencer Hess

// The function will determine what food you're eating depending how what letters you use
// each food has different heal amounts, can add food that increases agility/defense

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
