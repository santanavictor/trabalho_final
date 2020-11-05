#include "menu.h"

ostream &operator << (ostream &out, Menu &m)
{
	for (unsigned i = 0; i < m.menu.size (); i++)
		out << m.menu.at (i) << endl;
	return out;
}

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
