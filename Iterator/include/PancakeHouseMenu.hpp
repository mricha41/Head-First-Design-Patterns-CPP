#ifndef PANCAKEHOUSEMENU_HPP
#define PANCAKEHOUSEMENU_HPP

#include <vector>

#include "Menu.hpp"
#include "MenuItem.hpp"
#include "PancakeHouseMenuIterator.hpp"

class PancakeHouseMenu : public Menu
{
public:
	PancakeHouseMenu();
	~PancakeHouseMenu();

	void addItem(std::string name, std::string description, bool vegetarian, double price);

	virtual Iterator* createIterator() final;

private:
	std::vector<MenuItem> m_menuItems;
	Iterator* m_itr;
};

#endif //PANCAKEHOUSEMENU_HPP

