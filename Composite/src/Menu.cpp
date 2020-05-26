#include "Menu.hpp"

#include <iostream>
#include <algorithm>

#include "CompositeIterator.hpp"

//PIMPL'd
class MenuIterator : public Iterator {
public:
	MenuIterator() = delete;
	MenuIterator(std::vector<MenuComponent*>* items);
	virtual ~MenuIterator();

	virtual bool hasNext() override final;
	virtual MenuComponent* next() override final;
	virtual void remove() override final;

private:
	std::vector<MenuComponent*>* m_items;
	std::vector<MenuComponent*>::iterator m_itr;
};

MenuIterator::MenuIterator(std::vector<MenuComponent*>* items)
	:
	Iterator(),
	m_items(items),
	m_itr(items->begin())
{

}

MenuIterator::~MenuIterator()
{

}

MenuComponent* MenuIterator::next()
{
	MenuComponent* component = *m_itr;
	m_itr++;
	return component;
}

bool MenuIterator::hasNext()
{
	if (m_itr != m_items->end())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MenuIterator::remove()
{

}

Menu::Menu(std::string name, std::string description)
:
	m_menuComponents(),
	m_name(name),
	m_description(description)
{

}

Menu::~Menu()
{

}

void Menu::add(MenuComponent* component)
{
	m_menuComponents.push_back(component);
}

void Menu::remove(MenuComponent& component)
{
	std::remove(*m_menuComponents.begin(), *m_menuComponents.end(), component);
}

MenuComponent Menu::getChild(std::size_t id)
{
	if(id < m_menuComponents.size())
		return *m_menuComponents.at(id);

	return MenuComponent();
}

std::string Menu::getName()
{
	return m_name;
}

std::string Menu::getDescription()
{
	return m_description;
}

void Menu::print()
{
	std::cout << "\n" << m_name << ", " << m_description << "\n";
	std::cout << "---------------------" << "\n";
	for (auto& i : m_menuComponents)
	{
		i->print();
	}
}

Iterator* Menu::createIterator()
{
	return new CompositeIterator(createMenuIterator());
}

MenuIterator* Menu::createMenuIterator()
{
	return new MenuIterator(&m_menuComponents);
}