#include "prototype.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main()
{
    
    
    Player maincharicter;

    ListFourLocations(maincharicter);

    // OpeningScene();

    cout << endl;
    cout << "###########################################################" << endl;
    cout << "  HP: " << maincharicter.getHealth() << "/100   Strength: " << maincharicter.getStrength() << "   Gold: " << maincharicter.getMoney() << endl;
    cout << "  Defence: " << maincharicter.getDefense() << "   Agility : " << maincharicter.getAgility() << "   Keys: " << maincharicter.getKeyAmount() << endl;
    cout << "###########################################################" << endl;
}

