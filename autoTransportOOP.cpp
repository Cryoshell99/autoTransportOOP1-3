#include <iostream>
#include <fstream>
#include <string>
#include "Container.h"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	Container ctn;
	ctn.In(ifst);
	ofst << "Filled container. " << endl;
	ctn.Out(ofst);
	ctn.Clear();
	ofst << "Empty container. " << endl;
	ctn.Out(ofst);
	cout << "Stop" << endl;
	system("pause");

	return 0;
}