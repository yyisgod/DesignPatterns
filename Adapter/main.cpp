#include "TextShape.h"
#include <iostream>

int main() {
	Point bottomLeft, topRight;
	TextShape textshape(1,2);
	textshape.BoundingBox(bottomLeft,topRight);
	Manipulator* tm = textshape.CreateManipulator();
	bool isempty = textshape.IsEmpty();

	cout << bottomLeft << "," << topRight << ",empty:"
		<< isempty << " ";
	tm->out();

	return 0;
}
