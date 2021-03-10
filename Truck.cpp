#include "Truck.h"
void Truck::InData(ifstream& ifst)
{
	InCommon(ifst);
	ifst >> mAbstractDT;
};
void Truck::Out(ofstream& ofst)
{
	ofst << "It is Truck : carrying capacity = " << mAbstractDT
		<< ", ";
	OutCommon(ofst);
};