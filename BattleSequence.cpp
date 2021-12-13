/* File Name:			BattleSequence.cpp
Made By:				Collin Frommelt
What dose it do:		Enables the battle Sequence for combat with the player and enimie.
how it works:			You get 3 options to attack the enimie and once you chose one the enimi will fight back after that.
						it repeats till the player or enimie reaches 0 Hp. then exits the battle.
date:				    12/13/2021
*/

#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>
#include "Player.h"
#include "prototype.h"

using namespace std;
using namespace std::this_thread; 
using namespace std::chrono;
extern string peopleList[2][6];
extern string weaponList[10][9];

void BattleSequence(Player maincharicter)
{
	
	int x = 0;
	maincharicter.setWeaponRow(x);
	maincharicter.setPeopleRow(x);

	int playerAttackInput;
	int playerAttackDamage = 0;
	int enemiesHP = stoi(peopleList[maincharicter.getPeopleRow()][5]);
	string enemyName = peopleList[maincharicter.getPeopleRow()][0] ;
	int enimiDamageFinder;
	int enimeAttack;
	int enimeDamagetoPlayer;
	int enimeDefence;
	int playerHealth;
	int endBattle = 1;

	// text
	cout << endl << "You have encountered " << peopleList[maincharicter.getPeopleRow()][0] << "!" << endl;
	cout << "What will you do?" << endl;

	while (endBattle == 1)
	{
		displayStats(maincharicter.getHealth(), enemyName, enemiesHP);

		playerAttackInput = playerAttackChoice(maincharicter);

		if (playerAttackInput == 1) {
			playerAttackDamage = stoi(weaponList[maincharicter.getWeaponRow()][1]);
		}
		else if (playerAttackInput == 2) {
			playerAttackDamage = stoi(weaponList[maincharicter.getWeaponRow()][2]);
		} 
		else {
			playerAttackDamage = stoi(weaponList[maincharicter.getWeaponRow()][3]);
		}

		cout << "You attack " << enemyName << " and did " << playerAttackDamage << " damage!" << endl;
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);

		//randomizor
		srand(time(NULL));
		enimiDamageFinder = rand() % 6;

		if (enimiDamageFinder == 1 || enimiDamageFinder == 2 || enimiDamageFinder == 3){
			enimeAttack = stoi(peopleList[maincharicter.getPeopleRow()][1]);
		} else if (enimiDamageFinder == 4 || enimiDamageFinder == 5) {
			enimeAttack = stoi(peopleList[maincharicter.getPeopleRow()][2]);
		} else {
			enimeAttack = stoi(peopleList[maincharicter.getPeopleRow()][3]);
		}

		// player attack enimi calculator
		enimeDefence = stoi(peopleList[maincharicter.getPeopleRow()][4]);
		playerAttackDamage = (playerAttackDamage * playerAttackDamage) / (playerAttackDamage + enimeDefence);
		enemiesHP = enemiesHP - playerAttackDamage;

		// enimi attack player calculator
		enimeDamagetoPlayer = (enimeAttack * enimeAttack) / (enimeAttack + maincharicter.getDefense());
		playerHealth = maincharicter.getHealth() - enimeDamagetoPlayer;
		maincharicter.setHealth(playerHealth);

		// Output dialog
		cout << enemyName << " attacked back and did " << enimeDamagetoPlayer << "!" << endl;
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);

		// battle ending detector
		if (playerHealth <= 0) {
			endBattle = 3;
		} else if (enemiesHP <= 0) {
			endBattle = 2;
		} else {
			endBattle = 1;
		}
	}

	// battle ending text
	if (endBattle == 3)
	{
		cout << "sorry better luck next time";
	} else {
		cout << "you win";
	}
}


// Displayes Current battle stats
void displayStats(int health, string enemyName, int enemiesHP)
{
	cout << endl << endl;
	cout << "Current info:" << endl;
	cout << "Your stats-  HP: " << health << "/ 100" << endl;
	cout << enemyName << " stats-  HP: " << enemiesHP << "/100" << endl;
	cout << "**************************************" << endl;
}

// player input Choice 
int playerAttackChoice(Player maincharicter)
{
	int playerAttackInput;
	do {
		cout << "What will you do?" << endl;
		cout << "   1. " << weaponList[maincharicter.getWeaponRow()][5] << ". Damage: " << weaponList[maincharicter.getWeaponRow()][1] << endl;
		cout << "   2. " << weaponList[maincharicter.getWeaponRow()][6] << ". Damage: " << weaponList[maincharicter.getWeaponRow()][2] << endl;
		cout << "   3. " << weaponList[maincharicter.getWeaponRow()][7] << ". Damage: " << weaponList[maincharicter.getWeaponRow()][3] << endl;

		cin >> playerAttackInput;

		if (playerAttackInput < 1 || playerAttackInput > 3)
		{
			cout << "Please enter 1, 2, or 3." << endl;
		}
	} while (playerAttackInput < 1 || playerAttackInput > 3);

	return playerAttackInput;
}