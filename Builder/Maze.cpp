#include "Maze.h"

Room::Room(int roomNo) {
	_roomNumber = roomNo;
}
MapSite* Room::GetSide(Direction d) const {
	return _sides[d];
}

void Room::SetSide(Direction d, MapSite* m) {
	_sides[d] = m;
}

Wall::Wall(){ };

Door::Door(Room* r1, Room* r2) {
	_room1 = r1;
	_room2 = r2;
	_isOpen = false;
}

Room* Door::OtherSideFrom(Room* r) {
	if(r == _room1)
		return _room2;
	if(r == _room2)
		return _room1;
	return 0;
}

Maze::Maze(int mSize) {
	_mazeSize = mSize;
	_rooms = new Room*[mSize];
	_index = 0;
}

Maze::~Maze() {
	delete _rooms;
}

void Maze::AddRoom(Room* r) {
	if(_index < _mazeSize) {
		_rooms[_index++] = r;
	}
}

Room* Maze::RoomNo(int number) const {
	for(int i = 0; i < _mazeSize; i++) {
		if(_rooms[i]->_roomNumber == number)
			return _rooms[i];
	}
	return 0;
}

