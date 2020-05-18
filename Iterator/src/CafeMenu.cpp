#include "CafeMenu.hpp"

CafeMenu::CafeMenu()
:
	m_menuItems(),
	m_itr(nullptr)
{
	addItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99);
	addItem("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69);
	addItem("Burrito", "A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29);
}

CafeMenu::~CafeMenu()
{
	delete m_itr;
	m_itr = nullptr;
}

void CafeMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
	MenuItem item = MenuItem(name, description, vegetarian, price);
	m_menuItems.insert({ name, item });
}

Iterator* CafeMenu::createIterator()
{
	m_itr = new CafeMenuIterator(m_menuItems);
	return m_itr;
}
