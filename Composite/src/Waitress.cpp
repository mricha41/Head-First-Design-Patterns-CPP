#include "Waitress.hpp"

#include <iostream>

#include "Iterator.hpp"
#include "Menu.hpp"

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

void Waitress::printVegetarianMenu()
{
    Iterator* itr = m_components->createIterator();
    std::cout << "\nVEGETARIAN MENU\n----";
    while (itr->hasNext())
    {
        MenuComponent* component = itr->next();
        if (component->isVegetarian())
        {
            component->print();
        }
    }
    delete itr;
}
