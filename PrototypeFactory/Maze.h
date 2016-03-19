#ifndef __MAZE__
#define __MAZE__
enum Direction {North, South, East, West};

class MapSite {
public:
	virtual void Enter() = 0;
	virtual MapSite* Clone() const = 0;
};

class Room : public MapSite {
public:
	Room(int roomNo);
	Room(){}
	Room(const Room&);
	
	virtual Room* Clone() const;
	virtual void Initialize(int);
	MapSite* GetSide(Direction) const;
	void SetSide(Direction, MapSite*);
	virtual void Enter(){}
//private:
	MapSite* _sides[4];
	int _roomNumber;
};

class Wall : public MapSite {
public:
	Wall(){}
	Wall(const Wall&);
	
	virtual Wall* Clone() const;
	virtual void Enter(){}
};

class Door : public MapSite{
public:
	Door(Room*, Room*);
	Door(){}
	Door(const Door&);

	virtual void Initialize(Room*, Room*);
	virtual Door* Clone() const;
	virtual void Enter(){}
	Room* OtherSideFrom(Room*);
private:
	Room* _room1;
	Room* _room2;
	bool _isOpen;
};

class Maze {
public:
	Maze(int);
	Maze(const Maze&);
	~Maze();

	virtual void Initialize(int);
	virtual Maze* Clone() const;
	void AddRoom(Room*);
	Room* RoomNo(int) const;
private:
	Room** _rooms;
	int _mazeSize;
	int _index;
};
#endif
