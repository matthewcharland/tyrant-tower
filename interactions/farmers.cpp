// /interactions/farmers/farmer02.cpp
// Farmer01 Interaction Function
// Author: Matthew Charland

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

// /interactions/farmers/farmer02.cpp
// Farmer02 Interaction Function
// Author: Matthew Charland

#include <iostream>

void farmer02(){

using namespace std;

int farmer02q02;

cout << "Let us all thank King Frank for this plentiful harvest! \n";
cout << "(1) May I share a word with you? \n";
cout << "(2) King Frank is a tyrant and both of you deserve death, I will serve your death right now! \n";
cout << "(3) Walk away like you heard nothing. \n";

cin >> farmer02q02;


if (farmer02q02 == 2) {
	cout << "Death is now yours traitor!";
// Battle sequence with farmer to be programmed in later.

}
else {
	cout << "You are not worth my time peasant, be gone!";
}
}

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
