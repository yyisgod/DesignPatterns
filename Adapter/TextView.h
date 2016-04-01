typedef int Coord;
class TextView{
public:
	TextView():_x(0),_y(0) {}
	TextView(Coord& x, Coord& y):_x(x),_y(y) {}
	void GetOrigin(Coord& x, Coord& y) const {
		x = _x;
		y = _y;
	}
	void GetExtent(Coord& width, Coord& height) const {
		width = 10;//just for test
		height = 10;
	}
	virtual bool IsEmpty() const {
		if(_x ==0 && _y == 0)
			return false;
		return true;
	}
private:
	Coord _x;
	Coord _y;
};
