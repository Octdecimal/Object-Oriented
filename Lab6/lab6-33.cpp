#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int flip();

int main(){
	int coin;
	int head = 0;
	srand(time(NULL));
	for(int i = 0; i < 100; i++){
		if(i % 5 == 0){
			cout << "\n";
		}
		coin = flip();
		if(coin == 0){
			head++;
			cout << "Head\t";
		}else{
			cout << "Tails\t";
		}
	}
	cout <<"\n\nHead: " << head << "times, Tails: " << 100 - head << "times.";
	return 0;
}
// 0 => Head
// 1 => Tails
int flip(){
	int coin;
	coin = rand() % 2;
	return coin;
}