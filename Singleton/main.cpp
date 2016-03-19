#include "MazeGame.h"
#include "MazeFactory.h"
#include <iostream>
using namespace std;

int main() {
	MazeGame g;
	MazeFactory *f1 = MazeFactory::Instance();
	
	Maze* m1 = g.CreateMaze(*f1);

	cout << "old Factory: room2 number:" << 
		((Door*)(m1->RoomNo(1)->GetSide(East)))
			->OtherSideFrom(m1->RoomNo(1))->_roomNumber
		   	<< endl;
	return 0;
}
