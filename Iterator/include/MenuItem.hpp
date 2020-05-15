#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <string>

class MenuItem
{
public:
	MenuItem();
	MenuItem(std::string name, std::string description, bool vegetarian, double price);

	~MenuItem();

	bool operator == (MenuItem item) { return item.getName() == this->getName(); };

	std::string getName() { return m_name; };
	std::string getDescription() { return m_description; };
	bool isVegetarian() { return m_vegetarian; };
	double getPrice() { return m_price; };

private:
	std::string m_name;
	std::string m_description;
	bool m_vegetarian;
	double m_price;
};

#endif //MENUITEM_HPP
