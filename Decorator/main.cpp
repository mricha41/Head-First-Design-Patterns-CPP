#include <iostream>

#include "Espresso.hpp"
#include "HouseBlend.hpp"
#include "DarkRoast.hpp"
#include "Decaf.hpp"
#include "Mocha.hpp"
#include "Whip.hpp"
#include "SteamedMilk.hpp"
#include "Soy.hpp"

void printInfo(Beverage* beverage);

int main()
{
    Beverage* espresso = new Espresso();
    printInfo(espresso);

    Beverage* dark = new DarkRoast();
    printInfo(dark);
    dark = new Mocha(dark);
    dark = new Mocha(dark);
    dark = new Whip(dark);
    printInfo(dark);

    Beverage* house = new HouseBlend();
    house = new Soy(house);
    house = new Mocha(house);
    house = new Whip(house);
    printInfo(house);

    return 0;
}

void printInfo(Beverage* beverage)
{
    std::cout<<
    "----------------------------------------------------------------------------\n"
    "############################################################################\n"
    << beverage->getDescription()
    << "\n$"
    << beverage->cost() <<
    "\n############################################################################\n"
    "----------------------------------------------------------------------------"
    <<std::endl;
}
