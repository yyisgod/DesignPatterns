#include "MazePrototypeFactory.h"

MazePrototypeFactory::MazePrototypeFactory(
		Maze* m, Wall* w, Room* r, Door* d) {
	_protytypeMaze = m;
	_protytypeRoom = r;
	_protytypeWall = w;
	_protytypeDoor = d;
}

Wall* MazePrototypeFactory::MakeWall() const {
	return _protytypeWall->Clone();
}

Room* MazePrototypeFactory::MakeRoom(int n) const {
	Room* room = _protytypeRoom->Clone();
	room->Initialize(n);
	return room;
}

Door* MazePrototypeFactory::MakeDoor(Room* r1, Room* r2) const {
	Door* door = _protytypeDoor->Clone();
	door->Initialize(r1,r2);
	return door;
}

Maze* MazePrototypeFactory::MakeMaze() const {
	Maze* maze = _protytypeMaze->Clone();
	maze->Initialize(10);
	return maze;
}
