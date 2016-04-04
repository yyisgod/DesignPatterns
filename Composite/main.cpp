#include "CompositeEquipment.h"
#include "coms.h"
#include "ems.h"
#include <iostream>
using namespace std;

int main(){
	Cabinet* cabinet = new Cabinet("PC Cabinet");
	Chassis* chassis = new Chassis("PC Chassis");

	cabinet->Add(chassis);
	cabinet->Add(new FloppyDisk("2.5in Floppy"));

	chassis->Add(new CDRom("DVD"));
	chassis->Add(new CDRom("Writeable CD"));

	cout << "chassis value:" << chassis->NetPrice()
		<< "\nchassis composites:";
	chassis->NetString();
	cout << endl;

	cout << "cabinet value:" << cabinet->NetPrice()
		<< "\ncabinet composites:";
	cabinet->NetString();

	return 0;
}
