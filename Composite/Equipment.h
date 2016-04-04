#ifndef __EQUIPMENT__
#define __EQUIPMENT__
#include "Iterator.h"
#include <iostream>
using namespace std;

class Equipment{
public:

	const char* Name() {
		return _name;
	}

	virtual int NetPrice(){
	}
	virtual void NetString(){
	}
	virtual void toString(){
		cout << _name;
	}

	virtual void Add(Equipment*){
	}
	virtual void Remove(Equipment*){
	}

	friend class Iterator<Equipment*>;

	virtual Iterator<Equipment*>* CreateIterator(){
		return NULL;
	}
protected:
	Equipment(const char* name){
		_name = name;
	}
private:
	const char* _name;
};
#endif
