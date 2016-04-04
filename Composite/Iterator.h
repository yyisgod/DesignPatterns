#ifndef __ITE__
#define __ITE__
#include<list>
using namespace std;

template <class Item>
class Iterator {
public:
	Iterator(list<Item>&);
	virtual void First();
	virtual void Next();
	virtual bool IsDone() const;
	virtual Item CurrentItem() const;
protected:
	Iterator(){
	}
private:
	list<Item>* _list;
	typename list<Item>::iterator _it;
};

template <class Item>
Iterator<Item>::Iterator(list<Item>& ls) {
	_list = &ls;
	_it = ls.begin();
}

template <class Item>
void Iterator<Item>::First(){
	_it = _list->begin();
}

template <class Item>
void Iterator<Item>::Next(){
	_it++;
}

template <class Item>
bool Iterator<Item>::IsDone() const {
	return _it == _list->end();
}

template <class Item>
Item Iterator<Item>::CurrentItem() const{
	return *_it;
}
#endif
