#include "DeckOfCard.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

DeckOfCard::DeckOfCard() {
	currentCard = 0;

	for(int i = 0; i < Card::FACES * Card::SUITS; i++){
		Card card(i % Card::SUITS, i % Card::FACES);

		deck.push_back(card);
	}
}


Card DeckOfCard::dealCard() {
	return deck[currentCard++];
}

bool DeckOfCard::moreCards() const {
	return (currentCard < deck.size());
}

void DeckOfCard::shuffle() {
	srand( time(NULL) );
	for(int i = 0; i < Card::FACES * Card::SUITS; i++) {
		int x = rand() % (Card::FACES * Card::SUITS);
		swap(deck[i], deck[x]);
	}

}