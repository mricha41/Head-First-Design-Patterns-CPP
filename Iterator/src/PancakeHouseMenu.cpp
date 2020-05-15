#include "PancakeHouseMenu.hpp"

#include <iostream>

PancakeHouseMenu::PancakeHouseMenu()
:
	m_menuItems(),
	m_itr(nullptr)
{
	addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);
	addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
	addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
	addItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59);
}

PancakeHouseMenu::~PancakeHouseMenu()
{
	delete m_itr;
	m_itr = nullptr;
}

void PancakeHouseMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
	MenuItem item = MenuItem(name, description, vegetarian, price);
	m_menuItems.push_back(item);
}

Iterator* PancakeHouseMenu::createIterator()
{
	m_itr = new PancakeHouseMenuIterator(m_menuItems);
	return m_itr;
}
