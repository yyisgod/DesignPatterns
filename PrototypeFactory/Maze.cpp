#include "Maze.h"

Room::Room(int roomNo) {
	_roomNumber = roomNo;
}
Room::Room(const Room& r) {
	_roomNumber = r._roomNumber;
}

void Room::Initialize(int n) {
	_roomNumber = n;
}

Room* Room::Clone() const {
	return new Room(*this);
}

MapSite* Room::GetSide(Direction d) const {
	return _sides[d];
}

void Room::SetSide(Direction d, MapSite* m) {
	_sides[d] = m;
}

Wall::Wall(const Wall& w) {
	
}
Wall* Wall::Clone() const {
	return new Wall(*this);
}

Door::Door(Room* r1, Room* r2) {
	_room1 = r1;
	_room2 = r2;
	_isOpen = false;
}
Door::Door(const Door& other) {
	_room1 = other._room1;
	_room2 = other._room2;
}

void Door::Initialize(Room* r1, Room* r2) {
	_room1 = r1;
	_room2 = r2;
}

Door* Door::Clone() const {
	return new Door(*this);
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

Maze::Maze(const Maze& m) {
	_mazeSize = m._mazeSize;
	_index = m._index;
	_rooms = m._rooms;
}

void Maze::Initialize(int n) {
	_mazeSize = n;
	_rooms = new Room*[n];
	_index = 0;
}

Maze* Maze::Clone() const {
	return new Maze(*this);
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

