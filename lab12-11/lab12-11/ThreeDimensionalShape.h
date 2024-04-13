#ifndef THRDIM_H
#define THRDIM_H

#include "Shape.h"

class ThreeDimensionalShape : public Shape {
public:
	ThreeDimensionalShape(double x, double y) : Shape(x, y) {};

	virtual double getArea() const = 0;

	virtual double getVolume() const = 0;
};

#endif