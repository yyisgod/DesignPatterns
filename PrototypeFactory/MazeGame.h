#ifndef __MAZEGAME__
#define __MAZEGAME__
#include "MazeFactory.h"

class MazeGame {
public:
	MazeGame(){}
	Maze* CreateMaze(MazeFactory& factory);
private:
	Maze* _mazeGame;
};
#endif
