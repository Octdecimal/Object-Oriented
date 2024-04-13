#ifndef SQUARE_H
#define SQUARE_H

#include "TwoDimensionalShape.h"

class Square : public TwoDimensionalShape {
private:
	double sideLength;
public:
	Square(double = 0.0, double = 0.0, double = 0.0);
	virtual double getSideLength() const;
	virtual double getArea() const;
	void print() const;
};

#endif