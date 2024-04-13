#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	Complex a;
   Complex b;
   while(1){
      cout << "\nplease input two complex, form: (real number, imaginary)\n=>";
      cin >> a >> b;
	   cout << "Sum: "<< a + b << "\nDifference: " << a - b << "\nProduct: " << a * b <<"\n";
      cout << "same: " << (a == b) << "\nnot same: " << (a != b) << "\n";
   }
   return 0;
}