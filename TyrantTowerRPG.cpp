#include "prototype.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main()
{
    // OpeningScene();
    Player maincharicter;

    BattleSequence(maincharicter);
    // ListFourLocations(maincharicter);

    

    cout << endl;
    cout << "###########################################################" << endl;
    cout << "  HP: " << maincharicter.getHealth() << "/100   Strength: " << maincharicter.getStrength() << "   Gold: " << maincharicter.getMoney() << endl;
    cout << "  Defence: " << maincharicter.getDefense() << "   Agility : " << maincharicter.getAgility() << "   Keys: " << maincharicter.getKeyAmount() << endl;
    cout << "###########################################################" << endl;
}

