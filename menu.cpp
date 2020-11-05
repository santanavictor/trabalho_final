#include "menu.h"

Menu::Menu () {}

void Menu::setMenu ()
{
	menu = {"1 - Cadastrar Novo Aluno", 
		"2 - Alterar Cadastro de um Aluno",
		"3 - Exibir Banco de Matrículas",
		"4 - Excluir Dados de Alunos",
		"5 - Filtrar Alunos",
		"6 - Buscar Aluno",
		"0 - Sair do Programa"};
}

void Menu::imprimeMenu ()
{
	for (unsigned i = 0; i < menu.size (); i++)
	{
		cout << menu.at (i) << endl;
	}
}

