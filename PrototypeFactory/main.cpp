#include "MazeGame.h"
#include "MazePrototypeFactory.h"
#include <iostream>
using namespace std;

class newWall : public Wall {
public:
	newWall(){
		_symbol = 'N';		
	}
	virtual newWall* Clone() const {
		return new newWall();
	}
//private:
	char _symbol;
};

int main() {
	MazeGame game;
	MazePrototypeFactory f1(new Maze(10), new Wall, new Room,
			new Door());
	MazePrototypeFactory f2(new Maze(10), new newWall,
			new Room, new Door());
	
	Maze* m1 = game.CreateMaze(f1);
	Maze* m2 = game.CreateMaze(f2);

	cout << "old Factory: room2 number:" << 
		((Door*)(m1->RoomNo(1)->GetSide(East)))
			->OtherSideFrom(m1->RoomNo(1))->_roomNumber
		   	<< endl;
	cout << "new Wall:" <<
		((newWall*)(m2->RoomNo(2)->GetSide(North)))->_symbol << endl;
	return 0;
}
