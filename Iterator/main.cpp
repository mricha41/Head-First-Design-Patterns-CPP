#include <iostream>

#include "Waitress.hpp"

int main()
{
	PancakeHouseMenu pancakes;
	DinerMenu diner;
	CafeMenu cafe;

	Waitress waitress(&pancakes, &diner, &cafe);

	waitress.printMenu();

	return 0;
}