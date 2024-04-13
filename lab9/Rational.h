#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
private:         // ex. a / b
	int nume;    //numerator of fraction => a
    int deno;    //denominator of fraction => b
	void reduce();
public:
	Rational(int, int);

	Rational add(Rational &r);

	Rational sub(Rational &r);

	Rational mul(Rational &r);
	
	Rational div(Rational &r);

	void printInt() const;

	void printFloat() const;

};

#endif