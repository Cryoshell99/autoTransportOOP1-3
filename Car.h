#pragma once
#include "Transport.h"

class Car : public Transport
{
	int mAbstractDT;
public:
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	Car() {} // создание без инициализации.
};