#pragma once
#include <fstream>

using namespace std;

class Transport
{
	public:
		static Transport* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ввод
		virtual void Out(ofstream& ofst) = 0;
		void InCommon(ifstream& ifst);
		void OutCommon(ofstream& ofst);
	protected:
		int mData;
		double fuelConsumption;
};