#ifndef CARD_H
#define CARD_H

#include <string>

class Card{
private:
    int face;     // 1 ~ 13
	int suit;     // Spade(0) > Heart(1) > Diamond(2) > Club(3)

    static const int FACES = 13;
	static const int SUITS = 4;

	static const std::string faceNames[FACES];
	static const std::string suitNames[SUITS];

public:
    friend class DeckOfCard;
	
    Card(int, int);

	std::string toString() const;

	int getFace() const{
		return face;
	}

	int getSuit() const{
		return suit;
	}
};

#endif