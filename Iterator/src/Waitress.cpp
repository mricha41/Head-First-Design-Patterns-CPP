#include "Waitress.hpp"

#include <iostream>

Waitress::Waitress(Menu* pancakeHouse, Menu* diner)
:
	m_pancakeHouse(pancakeHouse),
	m_diner(diner)
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	Iterator* pancakeIter = m_pancakeHouse->createIterator();
	Iterator* dinerIter = m_diner->createIterator();
	std::cout << "MENU\n----\nBREAKFAST\n";
	printMenu(*pancakeIter);
	std::cout << "\nMENU\n----\nLUNCH\n";
	printMenu(*dinerIter);

	//uncomment to test the remove methods
	//of the iterators
	/*pancakeIter->remove();
	std::cout << "\nNEW MENU\n----\nBREAKFAST\n";
	printMenu(*pancakeIter);

	dinerIter->remove();
	std::cout << "\nNEW MENU\n----\nLUNCH\n";
	printMenu(*dinerIter);*/
}

void Waitress::printMenu(Iterator& iterator)
{
	while (iterator.hasNext())
	{
		MenuItem item = iterator.next();
		std::cout << item.getName() << ", " << item.getPrice() << " -- " << item.getDescription() << "\n";
	}
}