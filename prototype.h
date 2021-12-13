/* File Name:			prototype.h
Made By:				Collin Frommelt
What dose it do:		Holds prototypes for all the functions for vareus files that are not part of a class
date:					12/13/2021
*/
#pragma once
#include "Player.h"

void OpeningScene();
void ListFourLocations(Player maincharicter);
void BattleSequence(Player maincharicter);
void displayStats(int health, string enemyName, int enemiesHP);
int playerAttackChoice(Player maincharicter);