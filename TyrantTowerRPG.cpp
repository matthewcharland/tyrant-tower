/* File Name:            TyrantTowerRPG.cpp
Made By:                 Collin Frommelt
What dose it do:         Main function for the game
date:                    12/13/2021
*/
#include "prototype.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main()
{
    OpeningScene();
    Player maincharicter;

    BattleSequence(maincharicter);
    ListFourLocations(maincharicter);

    

    cout << endl;
    cout << "###########################################################" << endl;
    cout << "  HP: " << maincharicter.getHealth() << "/100   Strength: " << maincharicter.getStrength() << "   Gold: " << maincharicter.getMoney() << endl;
    cout << "  Defence: " << maincharicter.getDefense() << "   Agility : " << maincharicter.getAgility() << "   Keys: " << maincharicter.getKeyAmount() << endl;
    cout << "###########################################################" << endl;
}

