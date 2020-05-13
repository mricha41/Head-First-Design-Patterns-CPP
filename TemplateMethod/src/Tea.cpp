#include "Tea.hpp"

#include <iostream>

Tea::Tea()
{

}

Tea::~Tea()
{

}

void Tea::brew()
{
	std::cout << "Steeping the tea" << "\n";
}

void Tea::addCondiments()
{
	std::cout << "Adding Lemon" << "\n";
}
