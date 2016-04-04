#include "CompositeEquipment.h"

class Chassis : public CompositeEquipment{
public:
	Chassis(const char* name):CompositeEquipment(name){
	}

	//virtual int NetPrice();
};

class Cabinet : public CompositeEquipment{
public:
	Cabinet(const char* name):CompositeEquipment(name){
	}
};
