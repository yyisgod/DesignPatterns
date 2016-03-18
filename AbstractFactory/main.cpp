#include "MazeGame.h"
#include "newWallFactory.h"
#include <iostream>
using namespace std;

int main() {
	MazeGame g;
	MazeFactory f1;
	newWallFactory f2;
	
	Maze* m1 = g.CreateMaze(f1);
	Maze* m2 = g.CreateMaze(f2);

	cout << "old Factory: room2 number:" << 
		((Door*)(m1->RoomNo(1)->GetSide(East)))
			->OtherSideFrom(m1->RoomNo(1))->_roomNumber
		   	<< endl;
	cout << "new Wall:" <<
		((newWall*)(m2->RoomNo(2)->GetSide(North)))->_symbol << endl;
	return 0;
}
