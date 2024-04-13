#include "Rational.h"
#include <iostream>
#include <algorithm>

using namespace std;

Rational::Rational(int n = 0, int d = 1)  {
	nume = n;
	deno = d;
	reduce();
}

void Rational::reduce() {
	int tmp = __gcd(nume, deno);
	
	nume /= tmp;
	deno /= tmp;
}

Rational Rational::add(Rational &r) {       // ex. a / b + c / d
    int n, d;
	n = (nume * r.deno) + (r.nume * deno);  // a * d + c * b
	d = deno * r.deno;                      // b * d
	Rational ans(n, d);
	return ans;
}

Rational Rational::sub(Rational &r) {
	int n, d;
	n = (nume * r.deno) - (r.nume * deno);  // a * d + c * b
	d = deno * r.deno;                      // b * d
	Rational ans(n, d);
	return ans;
}

Rational Rational::mul(Rational &r) {
	int n, d;
	n = nume * r.nume;                      // a * c
	d = deno * r.deno;                      // b * d
	Rational ans(n, d);
	return ans;
}
	
Rational Rational::div(Rational &r) {
	int n, d;
	n = nume * r.deno;                      // a * d
	d = deno * r.nume;                      // b * c
	Rational ans(n, d);
	return ans;
}

void Rational::printInt() const{
	if(!deno){
		cout << "denominator is 0\n";
	}else{
	    cout << nume << "/" << deno;
	}
}

void Rational::printFloat() const{
	if(!deno){
		cout << "denominator is 0\n";
	}else{
	    float f = (float)nume / deno;
	    cout << f;
	}
	
}