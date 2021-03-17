#pragma once
#include "Transport.h"

class Container
{
	Container* Next;
	Transport* L;

	public:
		void In(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		void OutBus(ofstream& ofst);
		void Clear(); // ������� ���������� �� �����
		void Sort();
		void Swap(Container* first, Container* second);
		Container();
		~Container() { /*Clear();*/ }
};