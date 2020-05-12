#include "MallardDuck.hpp"

#include <iostream>

MallardDuck::MallardDuck()
{

}

MallardDuck::~MallardDuck()
{

}

void MallardDuck::quack()
{
	std::cout << "Quack" << std::endl;
}

void MallardDuck::fly()
{
	std::cout << "I'm flying" << std::endl;
}
