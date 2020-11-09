#include "cadastro.h"

ostream &operator << (ostream &out, Cadastro &c)
{
	for (unsigned i = 0; i < c.atual; i++)
		out << c.cadastros.at (i);
	return out;
}

Cadastro::Cadastro (): cadastros (10), atual (0)
{
	cout << "Você escolheu a opção de Cadastro de Aluno." << endl
		<< "Digite as informações que serão pedidas." << endl;
}

CadastroStruct Cadastro::getAluno ()
{
	//CadastroStruct aluno;
	cout << "Nome: ";
	cin >> aluno.nome;
	cout << "DRE: ";
	cin >> aluno.dre;
	cout << "Periodo: ";
	cin >> aluno.periodo;
	return aluno;
}

Cadastro &Cadastro::operator += (CadastroStruct &cs)
{
	cadastros.at (atual) = &cs;
	atual++;
	cout << atual << " cadastro(s)" << endl;
	return *this;
}

ostream &operator << (ostream &out, CadastroStruct *f)
{
	out << "Nome: " << f -> nome << endl;
	out << "DRE: " << f -> dre << endl;
	out << "Periodo: " << fixed << f -> periodo << endl << endl;
	return out;
}
/*void Cadastro::setNome ()
{

	cout << "Você escolheu a opção de cadastro de Aluno." << endl
		<< "Digite as informações que serão pedidas." << endl;
	cout << "Nome:";
	getline (cin, n);
	getline (cin, d);
	getline (cin, p);

	aluno -> nome = n;
	cout << aluno -> nome;
}

void Cadastro::setDRE ()
{
	cout << "DRE: ";
	getline (cin, d);
	aluno -> dre = d;
}

CadastroStruct* Cadastro::setPeriodo ()
{
	cout << "Periodo: ";
	getline (cin, p);
	aluno -> periodo = p;
	return aluno;
}*/
