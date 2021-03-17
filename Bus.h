#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int mAbstractDT;
	double fuelConsumption;
public:
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	float WPRatio();
	Bus() {} // создание без инициализации.
};