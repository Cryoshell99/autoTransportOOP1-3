#pragma once
#include "Transport.h"

class Truck : public Transport
{
	int mAbstractDT;
public:
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	Truck() {};
};