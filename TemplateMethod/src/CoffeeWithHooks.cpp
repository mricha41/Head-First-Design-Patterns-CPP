#include "CoffeeWithHooks.hpp"

#include <iostream>

CoffeeWithHooks::CoffeeWithHooks()
{

}

CoffeeWithHooks::~CoffeeWithHooks()
{

}

void CoffeeWithHooks::brew()
{
	std::cout << "Dripping CoffeeWithHooks through filter" << "\n";
}

void CoffeeWithHooks::addCondiments()
{
	std::cout << "Adding Sugar and Milk" << "\n";
}

bool CoffeeWithHooks::customerWantsCondiments()
{
	std::string yn = "n";
	std::cout << "Would you like Milk and Sugar in your coffee? (y/n)" << "\n";
	std::cin >> yn;
	return yn == "y";
}
