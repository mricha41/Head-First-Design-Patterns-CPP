#include "MenuItem.hpp"

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
