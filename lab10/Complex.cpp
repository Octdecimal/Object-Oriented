#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double r, double i) : real(r), imagi(i) {}

Complex Complex::operator+(const Complex &other) const {
   return Complex(real + other.real, imagi + other.imagi); 
}

Complex Complex::operator-(const Complex &other) const {
   return Complex(real - other.real, imagi - other.imagi );
}

Complex Complex::operator*(const Complex &other) const {
   return Complex(real * other.real - imagi * other.imagi, real * other.imagi + imagi * other.real);
}

bool Complex::operator==(const Complex &other) const {
   return ((real == other.real) && (imagi == other.imagi));
}

bool Complex::operator!=(const Complex &other) const {
   return ((real != other.real) || (imagi != other.imagi));
}

ostream& operator<<(ostream& out, const Complex& c) {
   out << c.real << " + " << c.imagi << "i";
   return out;
}

istream& operator>>(istream& in, Complex& c) {
   in >> c.real;
   in >> c.imagi;
   return in;
}