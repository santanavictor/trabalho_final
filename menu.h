#include <iostream>
#include <vector>
#include <string>

using namespace std;

#ifndef MENU_H
#define MENU_H

class Menu
{
	public:
		Menu ();

		void setMenu ();

		void imprimeMenu ();

	private:
		vector <string> menu;
};

#endif
