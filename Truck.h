#pragma once
#include "Transport.h"

class Truck : public Transport
{
	int mAbstractDT;
public:
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	Truck() {};
};