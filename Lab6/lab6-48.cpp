#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

unsigned int rollDice();
int craps();

int main(){
	int bankBalance = 1000;
	unsigned int wager;
	int status;
	int trashTalk;
	srand(time(NULL));

	while(cin >> wager){
		if(wager > bankBalance){
			cout << "Your wager is larger than your balance, please give smaller wager" << endl;
			continue;
		}
		trashTalk = rand() % 3;
		switch(trashTalk){
			case 0:
				cout << "Oh, you're going for broke, huh?" << endl;
			    break;
			case 1:
				cout << "Aw c'mon, take a chance!" << endl;
			    break;
			case 2:
				cout << "You're up big. Now's time to cash in your chips!" << endl;
			    break;
		}
		status = craps();
		if(status == 1){
			bankBalance += wager;
		}else{
			bankBalance -= wager;
		}
		cout << "Your balance is " << bankBalance << endl;
		if(bankBalance == 0){
			cout << "Sorry, you busted!" << endl;
		}
		cout << "\n";
	}

	return 0;
}

unsigned int rollDice(){
	unsigned int dice1 = rand() % 6 + 1;
	unsigned int dice2 = rand() % 6 + 1;
	unsigned int sum = dice1 + dice2;
	cout << "  Dice points = " << dice1 << " + " << dice2 << " = " << sum << endl;
	return sum;
}

int craps(){
	enum Status {CONTINUE, WON, LOST};
	unsigned int point = 0;
	Status gameStatus = CONTINUE;
	unsigned int sumOfDice = rollDice();

	do{                                  // this loop would execute at least once
		if(point){
			sumOfDice = rollDice();
			if(sumOfDice == point){
				gameStatus = WON;
				break;
			}
			if(sumOfDice == 7){
				gameStatus = LOST;
				break;
			}
		}else{
	        switch(sumOfDice){
        		case 7:
        		case 11:
        		    gameStatus = WON;
        			break;
        		case 2:
        		case 3:
    	    	case 12:
        		    gameStatus = LOST;
        			break;
		        default:
	    	        gameStatus = CONTINUE;
    	    		point = sumOfDice;
			        break;
	        }
		}
	}while(point);

	if(gameStatus == WON){
		cout << "  Player wins" << endl;
		return 1;
	}else{
		cout << "  Player loses" << endl;
		return 0;
	}
}
