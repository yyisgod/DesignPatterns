#include "ApplicationWindow.h"
extern int windowStyle;

int main() {
	ApplicationWindow window1;
	window1.DrawContents();
	windowStyle = 1;
	ApplicationWindow window2;
	window2.DrawContents();

	return 0;
}
