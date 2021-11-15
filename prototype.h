#pragma once
#include "Player.h"

void OpeningScene();
void ListFourLocations(Player maincharicter);
void BattleSequence(Player maincharicter);
void displayStats(int health, int attackPoints, string enemyName, int enemiesHP);
int playerAttackChoice();