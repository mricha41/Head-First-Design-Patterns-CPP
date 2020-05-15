#include "DinerMenu.hpp"

#include <iostream>

DinerMenu::DinerMenu()
:
	m_menuItems(),
	m_numItems(0),
	m_itr(nullptr)
{
	addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
	addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
	addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
	addItem("Hot Dog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05);
}

DinerMenu::~DinerMenu()
{

}

void DinerMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
	if (m_numItems < MAX_SIZE)
	{
		MenuItem item = MenuItem(name, description, vegetarian, price);
		m_menuItems[m_numItems] = item;
		m_numItems++;
	}
	else
	{
		std::cout << "Sorry, Menu is full! Can't add item to the menu\n\n";
	}
}

Iterator* DinerMenu::createIterator()
{
	m_itr = new DinerMenuIterator<MAX_SIZE>(m_menuItems);
	return m_itr;
}
