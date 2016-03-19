#include "newMazeGame.h"
#include <iostream>
using namespace std;

int main() {
	MazeGame g;
	newMazeGame g2;
	
	Maze* m1 = g.CreateMaze();
	Maze* m2 = g2.CreateMaze();

	cout << "old game: room2 number:" << 
		((Door*)(m1->RoomNo(1)->GetSide(East)))
			->OtherSideFrom(m1->RoomNo(1))->_roomNumber
		   	<< endl;
	cout << "new Wall Game:" <<
		((newWall*)(m2->RoomNo(2)->GetSide(North)))->_symbol << endl;
	return 0;
}
