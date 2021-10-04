#include <iostream>
#include <time.h>
#include "Player.h"
#include "prototype.h"

using namespace std;

extern string farmerRing[14];
extern string craftsmanRing[10];
extern string eliteClassRing[8];
extern string castle;



void ListFourLocations(Player maincharicter)
{
    

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