#include "Sphere.h"
#include <stdexcept>
#include <iostream>

const double Sphere::PI = 3.1415926;

Sphere::Sphere(double r, double x, double y) : ThreeDimensionalShape(x, y) {
	if (r >= 0.0)
		radius = r;
	else
		throw std::invalid_argument("Radius must be >= 0.0");
}
double Sphere::getRadius() const {
	return radius;
}
double Sphere::getArea() const {
	return 2.0 * radius * PI;
}
double Sphere::getVolume() const {
	return 3.0 / 4.0 * PI * radius * radius * radius;
}
void Sphere::print() const {
	std::cout << "Sphere with radius " << radius << "; center at (" << xCenter << ", " << yCenter << ")";
}