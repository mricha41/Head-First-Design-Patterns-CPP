#include "Waitress.hpp"

#include <iostream>

Waitress::Waitress(MenuComponent* components)
:
	m_components(components)
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	m_components->print();
}
