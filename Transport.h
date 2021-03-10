#pragma once
#include <fstream>
using namespace std;
class Transport
{
	public:
		static Transport* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ����
		virtual void Out(ofstream& ofst) = 0;
		int WPRatio();
		void InCommon(ifstream& ifst);
		void OutCommon(ofstream& ofst);
	protected:
		short int mData;
};