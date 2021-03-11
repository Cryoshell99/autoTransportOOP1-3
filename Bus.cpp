#include "Bus.h"
void Bus::InData(ifstream& ifst)
{
	InCommon(ifst); 
	ifst >> mAbstractDT;
};
void Bus::Out(ofstream& ofst)
{
	ofst << "It is Bus : passenger capacity = " << mAbstractDT
		<< ", ";
	OutCommon(ofst);
};

float Bus::WPRatio()
{
	return (float)(mAbstractDT*75) / (float)mData;
};