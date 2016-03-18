#include "MazeFactory.h"
class newWall : public Wall {
public:
	newWall(){
		_symbol = 'N';		
	}
//private:
	char _symbol;
};

class newWallFactory : public MazeFactory {
public:
	newWallFactory() {}
	virtual Wall* MakeWall() const {
		return new newWall();
	}
};
