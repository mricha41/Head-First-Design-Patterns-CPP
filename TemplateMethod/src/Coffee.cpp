#include "Coffee.hpp"

#include <iostream>

Coffee::Coffee()
{

}

Coffee::~Coffee()
{

}

void Coffee::brew()
{
	std::cout << "Dripping Coffee through filter" << "\n";
}

void Coffee::addCondiments()
{
	std::cout << "Adding Sugar and Milk" << "\n";
}
