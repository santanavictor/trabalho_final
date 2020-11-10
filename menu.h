#include <iostream>
#include <vector>
#include <string>

using namespace std;

#ifndef MENU_H
#define MENU_H

class Menu
{
	friend ostream &operator << (ostream &, Menu &);

	public:
		Menu ();

		void setMenu ();

	private:
		vector <string> menu;
};

#endif