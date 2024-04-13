#ifndef DECKOFCARD_H
#define DECKOFCARD_H

#include "Card.h"
#include <vector>

class DeckOfCard{
private:
    std::vector< Card > deck;
	unsigned int currentCard;
public:
    DeckOfCard();

	Card dealCard();

	bool moreCards() const;

	void shuffle();
	
};

#endif