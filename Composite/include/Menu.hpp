#ifndef MENU_HPP
#define MENU_HPP

#include <vector>

#include "MenuComponent.hpp"

class MenuIterator;

class Menu : public MenuComponent
{
public:
	Menu() = delete;
	Menu(std::string name, std::string description);

	virtual ~Menu();

	virtual bool operator == (MenuComponent component) override final { return component.getName() == this->getName(); };
	virtual void add(MenuComponent* component) override final;
	virtual void remove(MenuComponent& component) override final;
	virtual MenuComponent getChild(std::size_t id) override final;
	virtual std::string getName() override final;
	virtual std::string getDescription() override final;
	virtual void print() override final;

	virtual Iterator* createIterator() override final;
	MenuIterator* createMenuIterator();

private:
	std::vector<MenuComponent*> m_menuComponents;
	std::string m_name;
	std::string m_description;
};

#endif //MENU_HPP

