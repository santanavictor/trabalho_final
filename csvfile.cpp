#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	unsigned i, res;

	ofstream myfile;
	myfile.open ("tabela.csv");
	myfile << "Nome, DRE, Periodo, \n";
	myfile.close ();
	for (i = 0; i < 3; i++)
	{
		res = system ("python3 csvfile.py");
		if (res != 0)
			cout << "Exit code was: " << res << "\n";

	}

	return 0;
}
