#include "WindowImp.h"
int windowStyle = 0;
class Point {
public:
	Point(){
	}
	Point(int x_, int y_):x(x_),y(y_) {
	}
	int x;
	int y;
};

class Window {
public:
	Window(){}
	
	virtual void DrawContents(){
	}

	virtual void Open(){
	}
	virtual void Close(){
	}

	virtual void DrawLine(){
	}
	virtual void DrawRect(const Point&, const Point&){
	}
protected:
	WindowImp* GetWindowImp();
private:
	WindowImp* _imp;
};

WindowImp* Window::GetWindowImp() {
	//simple implement of Abstract Factory
	if(_imp == 0) {
		switch(windowStyle) {
			case 0:
				_imp = new XWindowImp();
				break;
			case 1:
				_imp = new YWindowImp();
				break;
		}

	}
	return _imp;
}
