#include "cadastro.h"

ostream &operator << (ostream &out)
{
	out << "Você escolheu a opção de cadastro de Aluno." << endl
		<< "Digite as informações que serão pedidas." << endl;
}

Cadastro::Cadastro () {}

void Cadastro::setNome ()
{
	cout << "Nome: ";
	cin.ignore ();
	getline (nome, cin);
	cadastro.nome = nome;
}

void Cadastro::setDRE ()
{
	cout << "DRE: ";
	getline (cin, dre);
	cadastro.dre = dre;
}

void Cadastro::setPeriodo ()
{
	cout << "Periodo: ";
	getline (cin, periodo);
	cadastro.periodo = periodo;
}


