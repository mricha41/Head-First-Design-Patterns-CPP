#include "MenuItem.hpp"

#include <iostream>

MenuItem::MenuItem()
:
	m_name(""),
	m_description(""),
	m_vegetarian(false),
	m_price(0.0)
{

}

MenuItem::MenuItem(std::string name, std::string description, bool vegetarian, double price)
:
	m_name(name),
	m_description(description),
	m_vegetarian(vegetarian),
	m_price(price)
{

}

MenuItem::~MenuItem()
{

}

void MenuItem::print()
{
	std::cout << " " << m_name;
	if (isVegetarian())
		std::cout << " (v)";
	
	std::cout << ", " << m_price << "\n";
	std::cout << "    -- " << m_description << "\n";
}

Iterator* MenuItem::createIterator()
{
	return nullptr;
}
