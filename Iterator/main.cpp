#include <iostream>

#include "Waitress.hpp"

int main()
{
	PancakeHouseMenu pancakes;
	DinerMenu diner;
	Waitress waitress(&pancakes, &diner);

	waitress.printMenu();

	return 0;
}