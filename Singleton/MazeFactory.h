#ifndef __MAZEFACTORY__
#define __MAZEFACTORY__
#include "Maze.h"
class MazeFactory{
	public:
		static MazeFactory* Instance();

		virtual Maze* MakeMaze() const {return new Maze(10);}
		virtual Wall* MakeWall() const {return new Wall;}
		virtual Room* MakeRoom(int n) const {return new Room(n);}
		virtual Door* MakeDoor(Room* r1, Room* r2)const
		{ return new Door(r1, r2);}
	protected:
		MazeFactory(){
		}
	private:
		static MazeFactory* _instance;
};

#endif
