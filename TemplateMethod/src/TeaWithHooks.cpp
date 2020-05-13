#include "TeaWithHooks.hpp"

#include <iostream>

TeaWithHooks::TeaWithHooks()
{

}

TeaWithHooks::~TeaWithHooks()
{

}

void TeaWithHooks::brew()
{
	std::cout << "Steeping the TeaWithHooks" << "\n";
}

void TeaWithHooks::addCondiments()
{
	std::cout << "Adding Lemon" << "\n";
}

bool TeaWithHooks::customerWantsCondiments()
{
	std::string yn = "n";
	std::cout << "Would you like Lemon in your tea? (y/n)" << "\n";
	std::cin >> yn;
	return yn == "y";
}
