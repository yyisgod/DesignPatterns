#include "MazeFactory.h"

MazeFactory* MazeFactory::_instance = 0;
MazeFactory* MazeFactory::Instance() {
	if (_instance == 0) {
		_instance = new MazeFactory;
	}
	return _instance;
}
