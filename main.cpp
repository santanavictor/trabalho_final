#include "menu.h"
#include "cadastro.h"

int main ()
{
	Menu menu;
	menu.setMenu ();
	cout << menu;
	Cadastro cadastro;
	CadastroStruct add [10];

	int escolha;

	switch (escolha)
	{
		case 1:


	cin.ignore ();
	for (unsigned i = 0; i < 3; i++)
	{
		add [i] = cadastro.getAluno ();
		cadastro += add[i];
	}
	cout << cadastro; 
	return 0;
}
