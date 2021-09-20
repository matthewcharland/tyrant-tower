#include "Travel.h"
#include <iostream>
#include <time.h>

using namespace std;

// Idea  that has not been implomented: have each random num be like 1 for farms 2 for lakes 3 for windmills and dark forest so it is not the same item like farm
// then dont have to worry about them being the same
// and 4 

void ListFourLocations()
{
    int random1 = 0;
    int random2 = 0;
    int random3 = 0;
    int random4 = 0;

    // initialize random seed (dont rerole this)
    srand(time(NULL));

    // generate secret number between 1 and 14 
    random1 = rand() % 14 + 1;
    random2 = rand() % 14 + 1;
    random3 = rand() % 14 + 1;
    random4 = rand() % 14 + 1;

    cout << random1;
    cout << endl;
    cout << random2;
    cout << endl;
    cout << random3;
    cout << endl;
    cout << random4;
    cout << endl;
    cout << "------------" << endl;

    while (random1 == random2 || random1 == random3 || random1 == random4 || random2 == random3 || random2 == random4 || random3 == random4)
    {
        srand(time(NULL));
        random1 = rand() % 14 + 1;
        random2 = rand() % 14 + 1;
        random3 = rand() % 14 + 1;


        cout << random1;
        cout << endl;
        cout << random2;
        cout << endl;
        cout << random3;
        cout << endl;
        cout << random4;
        cout << endl;
        cout << "------------" << endl;
    } 

    cout << "------------"<< endl;
    cout << random1;
    cout << endl;
    cout << random2;
    cout << endl;
    cout << random3;
    cout << endl;
    cout << random4;
    cout << endl;
}

