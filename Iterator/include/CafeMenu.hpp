#ifndef CAFEMENU_HPP 
#define CAFEMENU_HPP

#include <string>
#include <map>

#include "Menu.hpp"
#include "MenuItem.hpp"
#include "CafeMenuIterator.hpp"

class CafeMenu : public Menu
{
public:
	CafeMenu();
	~CafeMenu();

	void addItem(std::string name, std::string description, bool vegetarian, double price);

	virtual Iterator* createIterator() final;

private:
	std::map<std::string, MenuItem> m_menuItems;
	Iterator* m_itr;
};

#endif //CAFEMENU_HPP
