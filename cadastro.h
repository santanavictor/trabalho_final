#include <iostream>

struct CadastroStruct
{
	string nome, dre, periodo;
	Data *data;
}

class Cadastro
{
	friend ostream &operator << (ostream &);

	public:
		Cadastro (string, string, string);

		void setNome ();
		void setDRE ();
		//Data *getData ();
		void setPeriodo ();

	private:
		string nome, dre, periodo;
		vector <CadastroStruct *> cadastros;
		//Data *data;
}
