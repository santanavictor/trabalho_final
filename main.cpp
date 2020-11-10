#include <iostream>

#include "menu.h"
#include "cadastro.h"
#include "buscarAluno.h"

int main ()
{
	Menu menu;
	menu.setMenu ();
	cout << menu;
	int escolha = menu.escolher ();

	int res;

	switch (escolha)
	{
		case 1:
			res = system ("python3 cadastrarAluno.py");
			break;
		case 2:
			res = system ("python3 alterarAluno.py");
			break;
		case 6:
			buscarAluno ();
			break;

		default:
			exit (0);
	}
}
