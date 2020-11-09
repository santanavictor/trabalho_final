#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;
struct CadastroStruct
{
	string nome, dre, periodo;
	//Data *data;
	friend ostream &operator << (ostream &, CadastroStruct *);
};

class Cadastro
{
	friend ostream &operator << (ostream &, Cadastro &);

	public:
		Cadastro ();
		
		Cadastro &operator += (CadastroStruct &);

		CadastroStruct getAluno ();

	private:
		string n, d, p;
		vector <CadastroStruct*> cadastros;
		CadastroStruct aluno;
		unsigned atual;
		//Data *data;
};
