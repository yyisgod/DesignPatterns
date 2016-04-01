#include "Shape.h"
#include "TextView.h"

class TextShape : public Shape, private TextView {
public:
	TextShape(){}
	TextShape(Coord x, Coord y):TextView(x,y) {}

	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const;
	virtual bool IsEmpty() const;
	virtual Manipulator* CreateManipulator() const;
};	


void TextShape::BoundingBox(Point& bottomLeft, Point& topRight) const {
	Coord bottom, left, width, height;

	GetOrigin(bottom, left);
	GetExtent(width, height);

	bottomLeft = Point(bottom,left);
	topRight = Point(bottom + height, left + width);
}

bool TextShape::IsEmpty() const {
	return TextView::IsEmpty();
}

Manipulator* TextShape::CreateManipulator() const {
	return new TextManipulator();
}
