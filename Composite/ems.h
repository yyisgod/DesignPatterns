#include "Equipment.h"
class FloppyDisk : public Equipment{
public:
	FloppyDisk(const char* name):Equipment(name){
	}

	virtual int NetPrice(){
		return 10;
	}
};

class CDRom : public Equipment{
public:
	CDRom(const char* name):Equipment(name){
	}

	virtual int NetPrice() {
		return 78;
	}
};
