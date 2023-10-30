#include<iostream>
using namespace std;

int roundToInteger (float);
int roundToTenths (float);
int roundToHundredths (float);
int roundToThousandths (float);

int main(){
	float i;
	while(cin >> i){
		cout << "\nOrigin number: " << i << "\nRound to integer: " <<
		roundToInteger(i) << "\nRound to Tenths: " << roundToTenths(i) <<
		"\nRound to Hundredths: " << roundToHundredths(i) << "\nRound to thousandths: "<<
		roundToThousandths(i) << "\n\n";
	}
	return 0;
}

int roundToInteger (float input){
	int number;
	number = (int)(input + 0.5);
	return number;
}

int roundToTenths (float input){
	int base = 10;
	int number;
	number = (int)(input/base + 0.5);
	number *= base;
	return number;
}

int roundToHundredths (float input){
	int base = 100;
	int number;
	number = (int)(input/base + 0.5);
	number *= base;
	return number;
}

int roundToThousandths (float input){
	int base = 1000;
	int number;
	number = (int)(input/base + 0.5);
	number *= base;
	return number;
}