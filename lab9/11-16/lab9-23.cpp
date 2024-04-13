#include <iostream>
#include "Card.h"
#include "DeckOfCard.h"

using namespace std;

int main(){
	Card test1(0, 0);
	Card test2(2, 3);
	Card test3(1, 12);
	Card test4(3, 10);
	Card test5(5, 1);
	cout << test1.toString() << "\n" << 
	        test2.toString() << "\n" <<
			test3.toString() << "\n" <<
			test4.toString() << "\n";
	cout << "\n==================================================\n";

	DeckOfCard Deck1;
	while( Deck1.moreCards() ){
		cout << Deck1.dealCard().toString();
	}
	cout << "\n==================================================\n";

	DeckOfCard Deck2;
	Deck2.shuffle();
	while( Deck2.moreCards() ){
		cout << Deck2.dealCard().toString();
	}

	return 0;
}