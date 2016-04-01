#include<iostream>
#include<string>
using namespace std;
class Point {
public:
	Point(){
	}
	Point(int x_, int y_):x(x_),y(y_) {
	}
	int x;
	int y;
	friend inline ostream &operator << (ostream&, Point& p);
};
inline ostream &operator << (ostream& os, Point& p) {
	os << "(" << p.x << ", " << p.y << ")";
}

class Manipulator {
public:
	Manipulator(){_str = "Manipulator";}
	void out(){
		cout << _str << endl;
	}
protected:
	string _str;
};

class TextManipulator :public Manipulator{
public:
	TextManipulator(){_str = "TextManipulator";}
};


class Shape {
public:
	Shape(){}
	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const {}
	virtual Manipulator* CreateManipulator() const {}
};
