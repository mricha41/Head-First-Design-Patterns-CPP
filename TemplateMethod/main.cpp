#include <iostream>

#include "Tea.hpp"
#include "Coffee.hpp"
#include "TeaWithHooks.hpp"
#include "CoffeeWithHooks.hpp"

int main()
{
	Coffee coffee;
	Tea tea;

	std::cout << "Make some coffee..." << "\n";
	coffee.prepareRecipe();

	std::cout << "\nMake some tea..." << "\n";
	tea.prepareRecipe();

	CoffeeWithHooks coffeeWithHooks;
	TeaWithHooks teaWithHooks;

	std::cout << "\n";
	std::cout << "Make some coffee with hooks..." << "\n";
	coffeeWithHooks.prepareRecipe();

	std::cout << "\nMake some tea with hooks..." << "\n";
	teaWithHooks.prepareRecipe();

	return 0;
}