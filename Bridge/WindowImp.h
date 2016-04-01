#include<iostream>
using namespace std;

typedef int Coord;
class WindowImp {
public:
	virtual void ImpTop(){
	}

	virtual void DeviceRect(Coord, Coord, Coord, Coord){
	}
	
protected:
	WindowImp(){
	}
};

class XWindowImp : public WindowImp{
public:
	XWindowImp(){
	}

	virtual void DeviceRect(Coord, Coord, Coord, Coord);
};

void XWindowImp::DeviceRect(Coord c1, Coord c2, Coord c3, Coord c4) {
	//topLeft(c1,c2) bottom(c3,c4)
	int x = 0;
	while(x++ < c1) cout << endl;
	for (x = c1; x < c3-c1; x++){
		for(int y = 0; y < c4; y++) {
			if(y < c2) 
				cout << " ";
			else
				cout << "*"; 
		}
		cout << endl;
	}
}

class YWindowImp : public WindowImp{
public:
	YWindowImp(){
	}

	virtual void DeviceRect(Coord, Coord, Coord, Coord);
};

void YWindowImp::DeviceRect(Coord c1, Coord c2, Coord c3, Coord c4) {
	//topLeft(c1,c2) bottom(c3,c4)
	int x = 0;
	while(x++ < c1) cout << endl;
	for (x = c1; x < c3-c1; x++){
		for(int y = 0; y < c4; y++) {
			if(y < c2) 
				cout << " ";
			else
				cout << "#"; 
		}
		cout<<endl;
	}
}
