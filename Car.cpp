#include "Car.h"
void Car::InData(ifstream& ifst)
{
	InCommon(ifst);
	ifst >> mAbstractDT;
};
void Car::Out(ofstream& ofst)
{
	ofst << "It is Car : max speed = " << mAbstractDT
		<< ", ";
	OutCommon(ofst);
};