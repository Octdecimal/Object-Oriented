#include <iostream>
#include "account.h"

int main(){
	Account account1(1000);
	std::cout << "account 1 balance: " << account1.getBalance() << "\n";
	account1.credit(200);
	std::cout << "account 1 balance: " << account1.getBalance() << "\n";
	account1.debit(3000);
	std::cout << "account 1 balance: " << account1.getBalance() << "\n";
	std::cout << "\n";
	Account account2(-1);
	std::cout << "account 2 balance: " << account2.getBalance() << "\n";
	account2.credit(30000);
	std::cout << "account 2 balance: " << account2.getBalance() << "\n";
	account2.debit(1000);
	std::cout << "account 2 balance: " << account2.getBalance() << "\n";
	
	return 0;
}