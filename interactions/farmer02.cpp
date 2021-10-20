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

