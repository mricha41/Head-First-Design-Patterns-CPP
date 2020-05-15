#ifndef MENU_HPP
#define MENU_HPP

#include "Iterator.hpp"

class Menu
{
public:
	Menu();
	~Menu();

	virtual Iterator* createIterator() = 0;
};

#endif //MENU_HPP

