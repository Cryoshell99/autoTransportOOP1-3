#pragma once
#include "Transport.h"

class Car : public Transport
{
	int mAbstractDT;
public:
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	Car() {} // �������� ��� �������������.
};