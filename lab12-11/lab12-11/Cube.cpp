#include "Cube.h"
#include <stdexcept>
#include <iostream>

Cube::Cube(double s, double x, double y) : ThreeDimensionalShape(x, y) {
	if (s >= 0.0)
		sideLength = s;
	else
		throw std::invalid_argument("Radius must be >= 0.0");
}
double Cube::getSideLength() const {
	return sideLength;
}
double Cube::getArea() const {
	return sideLength * sideLength;
}
double Cube::getVolume() const {
	return sideLength * sideLength * sideLength;
}
void Cube::print() const {
	std::cout << "Cube with radius " << sideLength << "; center at (" << xCenter << ", " << yCenter << ")";
}