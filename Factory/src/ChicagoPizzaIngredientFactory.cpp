#include "ChicagoPizzaIngredientFactory.hpp"

#include "ThickCrustDough.hpp"
#include "PlumTomatoSauce.hpp"
#include "ShreddedMozarella.hpp"
#include "SlicedPepperoni.hpp"
#include "BlackOlives.hpp"
#include "Spinach.hpp"
#include "Eggplant.hpp"
#include "FrozenClams.hpp"

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{

}

ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{

}

Dough* ChicagoPizzaIngredientFactory::createDough()
{
    return new ThickCrustDough();
}

Sauce* ChicagoPizzaIngredientFactory::createSauce()
{
    return new PlumTomatoSauce();
}

Cheese* ChicagoPizzaIngredientFactory::createCheese()
{
    return new ShreddedMozarella();
}

std::vector<Veggies*>* ChicagoPizzaIngredientFactory::createVeggies()
{
    auto veggies = new std::vector<Veggies*>;
    veggies->push_back(new BlackOlives());
    veggies->push_back(new Spinach());
    veggies->push_back(new Eggplant());

    return veggies;
}

Pepperoni* ChicagoPizzaIngredientFactory::createPepperoni()
{
    return new SlicedPepperoni;
}

Clams* ChicagoPizzaIngredientFactory::createClams()
{
    return new FrozenClams;
}
