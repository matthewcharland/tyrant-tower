#include <iostream>
#include <time.h>
#include "Player.h"
#include "prototype.h"

using namespace std;

void ListFourLocations(Player maincharicter)
{
    string farmerRing[14] = { "Farm 1", "Farm 2", "Farm 3", "Farm 4", "Farm 5", "Farm 6", "Pond 1", "Pond 2", "Pond 3", "Windmill 1", "Windmill 2", "Windmill 3", "Dark Forest" , "Gate 1" };
    string craftsmanRing[10] = { "Leatherworker 1", "Leatherworker 2", "Cook 1", "Cook 2", "Blacksmith 1", "Blacksmith 2", "Weaver 1", "Weaver 2", "Gate 2", "Farm Area" };
    string eliteClassRing[8] = { "Rich Family 1", "Rich Family 2", "Rich Family 3", "Rich Family 4", "Rich Family 5", "Rich Family 6" , "Gate 3", "Gate 1" };
    string castle;

    int random1 = 0;
    int random2 = 0;
    int random3 = 0;
    int random4 = 0;

    srand(time(NULL));

    cout << "Where would you like to travle." << endl;
    if (maincharicter.location == "farmLocation")
    {
        random1 = rand() % 14;
        random2 = rand() % 14;
        random3 = rand() % 14;
        random4 = rand() % 14; 

        while (random1 == random2 || random1 == random3 || random1 == random4 || random2 == random3 || random2 == random4 || random3 == random4)
        {
            random1 = rand() % 14;
            random2 = rand() % 14;
            random3 = rand() % 14;
        }

        cout << "1. " << farmerRing[random1] << endl << "2. " << farmerRing[random2] << endl << "3. " << farmerRing[random3] << endl << "4. " << farmerRing[random4] << endl;
    } else if (maincharicter.location == "craftsmanLocation")
    {
        random1 = rand() % 10;
        random2 = rand() % 10;
        random3 = rand() % 10;
        random4 = rand() % 10;

        while (random1 == random2 || random1 == random3 || random1 == random4 || random2 == random3 || random2 == random4 || random3 == random4)
        {
            random1 = rand() % 10;
            random2 = rand() % 10;
            random3 = rand() % 10;
        }

        cout << "1. " << farmerRing[random1] << endl << "2. " << farmerRing[random2] << endl << "3. " << farmerRing[random3] << endl << "4. " << farmerRing[random4] << endl;
    } else if (maincharicter.location == "eliteClassLocation")
    {
        random1 = rand() % 8;
        random2 = rand() % 8;
        random3 = rand() % 8;

        while (random1 == random2 || random1 == random3 || random2 == random3)
        {
            random1 = rand() % 8;
            random2 = rand() % 8;
        }

        cout << "1. " << farmerRing[random1] << endl << "2. " << farmerRing[random2] << endl << "3. " << farmerRing[random3] << endl;
    } else {

    }
}