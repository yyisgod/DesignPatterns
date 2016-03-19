#ifndef __MAZEPROTOTYPEFACTORY__
#define __MAZEPROTOTYPEFACTORY__
#include "MazeFactory.h"
class MazePrototypeFactory : public MazeFactory {
public:
	MazePrototypeFactory(Maze*, Wall*, Room*, Door*);

	virtual Maze* MakeMaze() const;
	virtual Room* MakeRoom(int) const;
	virtual Wall* MakeWall() const;
	virtual Door* MakeDoor(Room*, Room*) const;
private:
	Maze* _protytypeMaze;
	Room* _protytypeRoom;
	Wall* _protytypeWall;
	Door* _protytypeDoor;
};
#endif
