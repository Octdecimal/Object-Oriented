#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex{
private:
   double real;
   double imagi;

public:
   Complex(double r = 0, double i = 0);

   Complex operator+(const Complex&) const;

   Complex operator-(const Complex&) const;

   Complex operator*(const Complex&) const;

   bool operator==(const Complex&) const;

   bool operator!=(const Complex&) const;

   friend std::ostream& operator<<(std::ostream&, const Complex&);

   friend std::istream& operator>>(std::istream&, Complex&);
};

#endif