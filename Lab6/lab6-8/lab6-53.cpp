#include <iostream>
#include "product.h"
using namespace std;

int main(){
	int int1, int2;
	long int lng1 = 0L, lng2 = 0L;
	float flt1 = 0.0f, flt2 = 0.0f;
	cout << "Input two integer value: ";
	cin >> int1 >> int2;
	cout << "The product integer value: " << product(int1, int2) << "\n\n";

	cout << "Input two long integer value: ";
	cin >> lng1 >> lng2;
	cout << "The product long integer value: " << product(lng1, lng2) << "\n\n";

	cout << "Input two float value: ";
	cin >> flt1 >> flt2;
	cout << "The product float value: " << product(flt1, flt2) << "\n\n";
}