#ifndef WAITRESS_HPP
#define WAITRESS_HPP

#include "PancakeHouseMenu.hpp"
#include "PancakeHouseMenuIterator.hpp"
#include "DinerMenu.hpp"
#include "DinerMenuIterator.hpp"

class Waitress
{
private:
	void printMenu(Iterator& iterator);

public:
	Waitress() = delete;
	Waitress(Menu* pancakeHouse, Menu* diner);

	~Waitress();

	void printMenu();

private:
	Menu* m_pancakeHouse;
	Menu* m_diner;
};

#endif //WAITRESS_HPP
