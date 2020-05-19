#include "Menu.hpp"

#include <iostream>
#include <algorithm>

Menu::Menu()
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
		return *m_menuComponents[id];

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
