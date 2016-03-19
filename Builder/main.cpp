#include "MazeGame.h"
#include "StandardMazeBuilder.h"
#include <iostream>
using namespace std;

int main() {
	Maze* maze;
	MazeGame game;
	StandardMazeBuilder builder;
	
	game.CreateMaze(builder);
	maze = builder.GetMaze();

	cout << "Room2:" << 
	   	maze->RoomNo(2)->_roomNumber <<endl;
	return 0;
}
