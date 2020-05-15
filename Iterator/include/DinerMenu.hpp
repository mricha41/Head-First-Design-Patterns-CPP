#ifndef DINERMENU_HPP
#define DINERMENU_HPP

#include <array>

#include "Menu.hpp"
#include "MenuItem.hpp"
#include "DinerMenuIterator.hpp"

const std::size_t MAX_SIZE = 9;

class DinerMenu : public Menu
{
public:
	DinerMenu();
	~DinerMenu();

	void addItem(std::string name, std::string description, bool vegetarian, double price);

	virtual Iterator* createIterator() final;

private:
	std::array<MenuItem, MAX_SIZE> m_menuItems;
	int m_numItems;
	Iterator* m_itr;
};

#endif //DINERMENU_HPP

