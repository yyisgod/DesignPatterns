#ifndef __COMEM__
#define __COMEM__
#include "Equipment.h"
#include <list>
class CompositeEquipment: public Equipment {
public:
	virtual int NetPrice();
	virtual void NetString();

	virtual void Add(Equipment*);
	virtual void Remove(Equipment* e){
	}
	virtual Iterator<Equipment*>* CreateIterator();

protected:
	CompositeEquipment(const char* name):Equipment(name){
	}
private:
	list<Equipment*> _equipment;
};

Iterator<Equipment*>* CompositeEquipment::CreateIterator(){
	Iterator<Equipment*>* it = new Iterator<Equipment*>(_equipment);  
	return it;
}

int CompositeEquipment::NetPrice(){
	Iterator<Equipment*>* i = CreateIterator();
	int total = 0;

	for(i->First(); !i->IsDone();i->Next()){
		total += i->CurrentItem()->NetPrice();
	}
	delete i;
	return total;
}
void CompositeEquipment::NetString(){
	Iterator<Equipment*>* i = CreateIterator();

	for(i->First(); !i->IsDone();i->Next()){
		Iterator<Equipment*>* ii = i->CurrentItem()->CreateIterator();
		if(ii != NULL){
			delete ii;
			i ->CurrentItem()->NetString();
		}else{
			i->CurrentItem()->toString();
			cout << ";";
		}
	}
	delete i;
}
void CompositeEquipment::Add(Equipment* e){
	_equipment.push_back(e);
}
#endif
