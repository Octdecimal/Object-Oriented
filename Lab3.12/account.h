#include <iostream>

class Account{
private:
    int balance;
public:
    explicit Account(int initialBalance) : balance(initialBalance) {
		if(initialBalance < 0){
			balance = 0;
			std::cout << "The initial balance of the account is illegal.\n";
		}
	}
	void credit(int plus){
		balance += plus;
	}
	void debit(int minus){
		if(minus > balance){
			std::cout << "The money you will withdraw is over balance.\n";
		}else{
		    balance -= minus;
		}
	}
	int getBalance() const{
		return balance;
	}
};
