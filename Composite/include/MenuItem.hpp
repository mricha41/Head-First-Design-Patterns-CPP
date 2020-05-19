#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <string>

#include "MenuComponent.hpp"

class MenuItem : public MenuComponent
{
public:
	MenuItem();
	MenuItem(std::string name, std::string description, bool vegetarian, double price);

	~MenuItem();

	virtual bool operator == (MenuComponent component) { return component.getName() == this->getName(); };

	virtual std::string getName() { return m_name; };
	virtual std::string getDescription() { return m_description; };
	virtual bool isVegetarian() { return m_vegetarian; };
	virtual double getPrice() { return m_price; };
	virtual void print();

private:
	std::string m_name;
	std::string m_description;
	bool m_vegetarian;
	double m_price;
};

#endif //MENUITEM_HPP
