#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape {
public:
	Circle(double = 0.0, double = 0.0, double = 0.0);
	virtual double getRadius() const;
	virtual double getArea() const;
	void print() const;
private:
	double radius;
	static const double PI;
};

#endif