#include "Waitress.hpp"

#include <iostream>

Waitress::Waitress(Menu* pancakeHouse, Menu* diner, Menu* cafe)
:
	m_pancakeHouse(pancakeHouse),
	m_diner(diner),
	m_cafe(cafe)
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	Iterator* pancakeIter = m_pancakeHouse->createIterator();
	Iterator* dinerIter = m_diner->createIterator();
	Iterator* cafeIter = m_cafe->createIterator();
	//calling remove here removes the first menu item
	//because that is where the position starts when instantiating an iterator
	//cafeIter->remove();
	std::cout << "MENU\n----\nBREAKFAST\n";
	printMenu(*pancakeIter);
	std::cout << "\nMENU\n----\nLUNCH\n";
	printMenu(*dinerIter);
	std::cout << "\nMENU\n----\nDINNER\n";
	printMenu(*cafeIter);

	//comment/uncomment to test the remove methods
	//of the iterators
	pancakeIter->remove();
	std::cout << "\nNEW MENU\n----\nBREAKFAST\n";
	printMenu(*pancakeIter);

	dinerIter->remove();
	std::cout << "\nNEW MENU\n----\nLUNCH\n";
	printMenu(*dinerIter);
	
	//calling remove here removes the last menu item since a call to print leaves the iterator in the last position in the container...
	cafeIter->remove();
	//once remove() finishes, the iterator resets to the beginning
	//allowing the next print(...) call to behave as expected
	std::cout << "\nNEW MENU\n----\nDINNER\n";
	printMenu(*cafeIter);
}

void Waitress::printMenu(Iterator& iterator)
{
	while (iterator.hasNext())
	{
		MenuItem item = iterator.next();
		std::cout << item.getName() << ", " << item.getPrice() << " -- " << item.getDescription() << "\n";
	}
}