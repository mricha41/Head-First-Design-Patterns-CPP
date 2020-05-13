#include "CaffeineBeverage.hpp"

#include <iostream>

CaffeineBeverage::CaffeineBeverage()
{

}

CaffeineBeverage::~CaffeineBeverage()
{

}

void CaffeineBeverage::prepareRecipe ()
{
	boilWater();
	brew();
	pourInCup();
	if(customerWantsCondiments())
		addCondiments();
}

void CaffeineBeverage::boilWater()
{
	std::cout << "Boiling water" << "\n";
}

void CaffeineBeverage::pourInCup()
{
	std::cout << "Pouring into cup" << "\n";
}
