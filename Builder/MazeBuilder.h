#ifndef __MAZEBUILDER__
#define __MAZEBUILDER__
#include "Maze.h"
class MazeBuilder {
public:
	virtual void BuildMaze(){}
	virtual void BuildRoom(int room){}
	virtual void BuildDoor(int roomFrom, int roomTo) {}

	virtual Maze* GetMaze(){return 0;}
protected:
	MazeBuilder(){};
};
#endif