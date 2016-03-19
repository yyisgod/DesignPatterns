#ifndef __MAZEGAME__
#define __MAZEGAME__
#include "Maze.h"

class MazeGame {
public:
	MazeGame(){}
	Maze* CreateMaze();

	//factory method
	virtual Maze* MakeMaze() const
	{return new Maze(10);}
	virtual Room* MakeRoom(int n) const
	{return new Room(n);}
	virtual Door* MakeDoor(Room* r1, Room* r2) const
	{return new Door(r1, r2);}
	virtual Wall* MakeWall() const 
	{return new Wall;}
};
#endif
