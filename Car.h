#pragma once
#include "Transport.h"

class Car : public Transport
{
	int mAbstractDT;
	double fuelConsumption;
public:
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	float WPRatio();
	Car() {} // �������� ��� �������������.
};