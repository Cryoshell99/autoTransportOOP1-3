#pragma once
#include "Transport.h"

class Truck : public Transport
{
	int mAbstractDT;
	double fuelConsumption;
public:
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	float WPRatio();
	Truck() {};
};