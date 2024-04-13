#include "Square.h"
#include <stdexcept>
#include <iostream>

Square::Square(double s, double x, double y) : TwoDimensionalShape(x, y) {
	if (s >= 0.0) 
		sideLength = s;
	else 
		throw std::invalid_argument("Side must be >= 0.0");
}

double Square::getSideLength() const {
	return sideLength;
}

double Square::getArea() const {
	return sideLength * sideLength;
}

void Square::print() const {
	std::cout << "Square with side length " << sideLength << "; center at (" << xCenter << ", " << yCenter << ")";
}