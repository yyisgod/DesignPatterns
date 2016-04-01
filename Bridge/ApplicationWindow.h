#include "Window.h"

class ApplicationWindow : public Window{
public:
	ApplicationWindow(){
	}
	virtual void DrawContents(){
		Point p1(2,2);
		Point p2(10,40);

		DrawRect(p1, p2);
	}

	virtual void DrawRect(const Point& p1, const Point& p2);
};

void ApplicationWindow::DrawRect(const Point& p1, const Point& p2) {
	WindowImp* imp = GetWindowImp();
	imp->DeviceRect(p1.x,p1.y, p2.x, p2.y);
}
