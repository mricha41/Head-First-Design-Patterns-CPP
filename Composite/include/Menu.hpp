#ifndef MENU_HPP
#define MENU_HPP

#include <vector>

#include "MenuComponent.hpp"

class Menu : public MenuComponent
{
public:
	Menu();
	Menu(std::string name, std::string description);

	~Menu();

	virtual bool operator == (MenuComponent component) { return component.getName() == this->getName(); };
	virtual void add(MenuComponent* component);
	virtual void remove(MenuComponent& component);
	virtual MenuComponent getChild(std::size_t id);
	virtual std::string getName();
	virtual std::string getDescription();
	virtual void print();

private:
	std::vector<MenuComponent*> m_menuComponents;
	std::string m_name;
	std::string m_description;
};

#endif //MENU_HPP

