#ifndef TWODIM_H
#define TWODIM_H

#include "Shape.h"

class TwoDimensionalShape : public Shape {
public:
	TwoDimensionalShape(double x, double y) : Shape(x, y) {};

	virtual double getArea() const = 0;
private:
};

#endif