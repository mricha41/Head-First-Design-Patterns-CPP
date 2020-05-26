#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <string>
#include <vector>

#include "MenuComponent.hpp"

class MenuItem : public MenuComponent
{
public:
	MenuItem();
	MenuItem(std::string name, std::string description, bool vegetarian, double price);

	virtual ~MenuItem();

	virtual bool operator == (MenuComponent component) override final { return component.getName() == this->getName(); };

	virtual std::string getName() override final { return m_name; };
	virtual std::string getDescription() override final { return m_description; };
	virtual bool isVegetarian() override final { return m_vegetarian; };
	virtual double getPrice() override final { return m_price; };
	virtual void print() override final;
	virtual Iterator* createIterator() override final;

private:
	std::string m_name;
	std::string m_description;
	bool m_vegetarian;
	double m_price;
};

#endif //MENUITEM_HPP
