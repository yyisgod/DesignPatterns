#ifndef __MAZEGAME__
#define __MAZEGAME__
#include "MazeBuilder.h"

class MazeGame {
public:
	MazeGame(){}
	Maze* CreateMaze(MazeBuilder& builder);
private:
	Maze* _mazeGame;
};
#endif
