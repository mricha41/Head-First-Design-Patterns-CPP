#ifndef WAITRESS_HPP
#define WAITRESS_HPP

#include "PancakeHouseMenu.hpp"
#include "PancakeHouseMenuIterator.hpp"
#include "DinerMenu.hpp"
#include "DinerMenuIterator.hpp"
#include "CafeMenu.hpp"
#include "CafeMenuIterator.hpp"

class Waitress
{
private:
	void printMenu(Iterator& iterator);

public:
	Waitress() = delete;
	Waitress(Menu* pancakeHouse, Menu* diner, Menu* cafe);

	~Waitress();

	void printMenu();

private:
	Menu* m_pancakeHouse;
	Menu* m_diner;
	Menu* m_cafe;
};

#endif //WAITRESS_HPP
