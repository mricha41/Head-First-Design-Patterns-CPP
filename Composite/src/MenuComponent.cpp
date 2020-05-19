#include "MenuComponent.hpp"

MenuComponent::MenuComponent()
{
}

MenuComponent::~MenuComponent()
{
}

bool MenuComponent::operator==(MenuComponent component)
{
	return false;
}

void MenuComponent::add(MenuComponent* component)
{
}

void MenuComponent::remove(MenuComponent& component)
{
}

MenuComponent MenuComponent::getChild(std::size_t id)
{
	return MenuComponent();
}

std::string MenuComponent::getName()
{
	return std::string();
}

std::string MenuComponent::getDescription()
{
	return std::string();
}

double MenuComponent::getPrice()
{
	return 0.0;
}

bool MenuComponent::isVegetarian()
{
	return false;
}

void MenuComponent::print()
{
}
