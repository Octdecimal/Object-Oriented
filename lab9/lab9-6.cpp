#include "Rational.h"
#include "Rational.cpp"
#include <iostream>

using namespace std;

int main(){
	Rational test1(7, 8);
	Rational test2(3, 12);
	Rational test;

	cout << "test1: ";
	test1.printInt();
	cout << ", ";
	test1.printFloat();
	cout <<"\n";

	cout << "test2: ";
	test2.printInt();
	cout << ", ";
	test2.printFloat();
	cout <<"\n";
	
	cout << "test: ";
	test.printInt();
	cout << ", ";
	test.printFloat();
	cout <<"\n==========================================\n";
	
	test = test1.add(test2);
	cout << "addtion_test: ";
	test.printInt();
	cout << ", ";
	test.printFloat();
	cout <<"\n==========================================\n";
	
	test = test1.sub(test2);
	cout << "subtraction_test: ";
	test.printInt();
	cout << ", ";
	test.printFloat();
	cout <<"\n==========================================\n";
	
	test = test1.mul(test2);
	cout << "multiplication_test: ";
	test.printInt();
	cout << ", ";
	test.printFloat();
	cout <<"\n==========================================\n";
	
	test = test1.div(test2);
	cout << "division_test: ";
	test.printInt();
	cout << ", ";
	test.printFloat();
	cout <<"\n";

	return 0;
}