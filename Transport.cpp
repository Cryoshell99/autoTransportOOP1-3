#include "Transport.h"
#include "Bus.h"
#include "Truck.h"
Transport* Transport::In(ifstream& ifst)
{
	int k, error1, error2;
	Transport* lg;
	ifst >> k;
	switch (k)
	{
	case 1:
		lg = new Bus();
		break;
	case 2:
		lg = new Truck();
		break;
	default:

		ifst >> error1 >> error2;
		return NULL;
	}
	lg->InData(ifst);
	return lg;
};

void Transport::InCommon(ifstream& ifst)
{
	ifst >> mData;
};
void Transport::OutCommon(ofstream& ofst)
{
	ofst << " Engine power: " << mData << endl;
};

