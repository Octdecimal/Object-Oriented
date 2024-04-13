#include <iostream>
#include "Card.h"

using namespace std;

const string Card::faceNames[Card::FACES] =
{"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
const string Card::suitNames[Card::SUITS]=
{"Spade","Heart","Diamond","Club"};


Card::Card(int cardSuit, int cardFace){
	if(cardSuit < 0 || cardSuit >= SUITS || cardFace < 0 || cardFace >= FACES){
		cout<<"Error card face or suit\n";
	}else{
	    suit = cardSuit;
    	face = cardFace;
	}
}

string Card::toString() const {
	return (" " + suitNames[suit] + " " + faceNames[face]);
}