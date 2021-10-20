// /interactions/farmers/farmer03.cpp
// Farmer03 Interaction Function
// Author: Matthew Charland

#include <iostream>

void farmer03(){

using namespace std;

int farmer03q03;

cout << "Not a drop of rain in weeks, surely the harvest will be dry! \n";
cout << "(1) Do you have any crops for sale? \n";
cout << "(2) Serves you right! \n";
cout << "(3) Walk away like you heard nothing. \n";

cin >> farmer03q03;

if (farmer03q03 == 1) {
	cout << "What do you think? There hasn't been a drop of rain in months!";
}

else if (farmer03q03 == 2) {
	cout << "Leave while you can, peasant!";

}

else {
return; 
}
}
