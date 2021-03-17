#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int mAbstractDT;
public:
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	Bus() {} // создание без инициализации.
};