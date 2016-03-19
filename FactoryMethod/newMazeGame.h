#ifndef __NEWMAZEGAME__
#define __NEWMAZEGAME__
#include "MazeGame.h"
class newWall :public Wall {
public:
	newWall(){
		_symbol = 'N';
	}
	char _symbol;
};

class newMazeGame : public MazeGame {
public:
	newMazeGame(){}
	virtual Wall* MakeWall() const {
		return new newWall();
	}
};
#endif
