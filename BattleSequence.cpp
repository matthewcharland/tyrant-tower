/* File Info
* Known bug: If a wepon dose not have a special move it screws up the thing when you enter 4
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

/* UNFINISHED
* needs to pull wepon and person who is fighting data in the game
*/
extern string Sword[9];
extern string TestDummy[6];

void BattleSequence(Player maincharicter)
{
	int playerAttackInput;
	int playerAttackDamage = 0;
	
	int enemiesHP;
	enemiesHP = stoi(TestDummy[5]);
	string enemyName = TestDummy[0];

	int enimiDamageFinder;
	int enimeAttack;
	int enimeDamagetoPlayer;
	int enimeDefence;
	int playerHealth;
	int endBattle = 1;

	/* UNFINISHED
	*  Attack points is in each attackand the bigger the attack 
	*  the more points it spends but if you dont have enough points 
	*  for the attack you cant use that attack.
	*  
	*  You ganin a set amount per attack in the loop.
	*/
	int attackPoints = 50;

	// text
	cout << endl << "You have encountered " << TestDummy[0] << "!" << endl;
	cout << "What will you do?" << endl;

	while (endBattle == 1)
	{
		displayStats(maincharicter.getHealth(), attackPoints, enemyName, enemiesHP);

		playerAttackInput = playerAttackChoice();

		if (playerAttackInput == 1) {
			playerAttackDamage = stoi(Sword[1]);
		}
		else if (playerAttackInput == 2) {
			playerAttackDamage = stoi(Sword[2]);
		} 
		else if (playerAttackInput == 4) {
			playerAttackDamage = stoi(Sword[4]);
		}
		else {
			playerAttackDamage = stoi(Sword[3]);
		}


		cout << "You attack " << enemyName << " and did " << playerAttackDamage << " damage!" << endl;
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);

		

		//randomizor
		srand(time(NULL));
		enimiDamageFinder = rand() % 6;

		if (enimiDamageFinder == 1 || enimiDamageFinder == 2 || enimiDamageFinder == 3){
			enimeAttack = stoi(TestDummy[1]);
		} else if (enimiDamageFinder == 4 || enimiDamageFinder == 5) {
			enimeAttack = stoi(TestDummy[2]);
		} else {
			enimeAttack = stoi(TestDummy[3]);
		}

		// player attack enimi calculator
		enimeDefence = stoi(TestDummy[4]);
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
void displayStats(int health, int attackPoints, string enemyName, int enemiesHP)
{
	cout << endl << endl;
	cout << "Current info:" << endl;
	cout << "Your stats-  HP: " << health << "/ 100  AP: " << attackPoints << endl;
	cout << enemyName << " stats-  HP: " << enemiesHP << "/100" << endl;
	cout << "**************************************" << endl;
}

// player input Choice 
int playerAttackChoice()
{
	int playerAttackInput;
	do {
		cout << "What will you do?" << endl;
		cout << "   1. 20 damage" << endl;
		cout << "   2. 30 damage" << endl;
		cout << "   3. 40 damage" << endl;
		cout << "   4. 50 damage (special weapon attack)" << endl;

		cin >> playerAttackInput;

		if (playerAttackInput < 1 || playerAttackInput > 4)
		{
			cout << "Please enter 1, 2, 3, or 4." << endl;
		}
	} while (playerAttackInput < 1 || playerAttackInput > 4);

	return playerAttackInput;
}