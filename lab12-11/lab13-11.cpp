#include <iostream>
#include <array>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h"

using namespace std;

int main() {
	array <Shape*, 4> shapes;
	
	shapes[0] = new Circle(3.5, 6.9);
	shapes[1] = new Square(12, 2, 2);
	shapes[2] = new Sphere(5, 1.5, 4.5);
	shapes[3] = new Cube(2.2);

	for (int i = 0; i < 4; i++) {
		cout << *shapes[i] << "\n";

		TwoDimensionalShape* twoDimensionalShapePtr = dynamic_cast <TwoDimensionalShap*> (shapes[i]);
		if (twoDimensionalShapePtr != nullptr) {
			cout << "Area: " << twoDimensionalShapePtr->getArea() << "\n";
		}

		ThreeDimensionalShape* threeDimentionalShapePtr = dynamic_cast <ThreeDimensionalShap*> (shapes[i]);
		if (threeDimensionalShapPtr != nullptr) {
			cout << "Area: " << threeDimensionalShapePtr->getArea() << "\nVolume: " << threeDimensionalShapePtr->getVolume() << "\n";
		}

		cout << "\n";
	}

	system("pause");
	return 0;
}