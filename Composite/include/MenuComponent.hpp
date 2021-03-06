#ifndef MENUCOMPONENT_HPP
#define MENUCOMPONENT_HPP

#include <string>
#include <vector>

class Iterator;

class MenuComponent
{
public:
	MenuComponent();
	~MenuComponent();
	
	virtual bool operator == (MenuComponent component);
	virtual void add(MenuComponent* component);
	virtual void remove(MenuComponent& component);
	virtual MenuComponent getChild(std::size_t id);
	virtual std::string getName();
	virtual std::string getDescription();
	virtual double getPrice();
	virtual bool isVegetarian();
	virtual void print();

	virtual Iterator* createIterator();
};

#endif //MENUCOMPONENT_HPP

