#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int mAbstractDT;
public:
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	Bus() {} // �������� ��� �������������.
};