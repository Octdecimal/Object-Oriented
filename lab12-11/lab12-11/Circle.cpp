#include "Circle.h"
#include <stdexcept>
#include <iostream>

const double Circle::PI = 3.1415926;

Circle::Circle(double r, double x, double y) : TwoDimensionalShape(x, y) {
	if (r >= 0.0)
		radius = r;
	else
		throw std::invalid_argument("Radius must be >= 0.0");
}
double Circle::getRadius() const {
	return radius;
}
double Circle::getArea() const {
	return 2.0 * radius * PI;
}
void Circle::print() const {
	std::cout << "Circle with radius " << radius << "; center at (" << xCenter << ", " << yCenter << ")";
}