// /interactions/farmers/farmer02.cpp
// Farmer01 Interaction Function
// Author: Matthew Charland
jk
#include <iostream>

void farmer01(){

using namespace std;

int farmer01q01;

cout << "These fools think they can steal my crops without paying! \n";
cout << "(1) I can help take down the thieves in exchange for some of your crops. \n";
cout << "(2) It's about to happen again! \n";
cout << "(3) Walk away like you heard nothing. \n";

cin >> farmer01q01;

if (farmer01q01 == 1) {
	cout << "Sounds like a fair trade.";
// Battle sequence with thieves to be programmed in later.
}

else if (farmer01q01 == 2) {
	cout << "Not if I have anything to say about it, peasant!";
// Battle sequence with farmer to be programmed in later.
}

else {
return; 
}
}
