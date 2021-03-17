#include "Bus.h"

void Bus::InData(ifstream& ifst)
{
	ifst >> mAbstractDT;
	InCommon(ifst);
};
void Bus::Out(ofstream& ofst)
{
	ofst << "It is Bus : passenger capacity = " << mAbstractDT
		<< ", ";
	OutCommon(ofst);
};