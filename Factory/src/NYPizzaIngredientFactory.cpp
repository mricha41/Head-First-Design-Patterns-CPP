#include "NYPizzaIngredientFactory.hpp"

#include "Garlic.hpp"
#include "Onion.hpp"
#include "Mushroom.hpp"
#include "RedPepper.hpp"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{

}

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{

}

Dough* NYPizzaIngredientFactory::createDough()
{
    return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce()
{
    return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese()
{
    return new ReggianoCheese();
}

std::vector<Veggies*>* NYPizzaIngredientFactory::createVeggies()
{
    auto veggies = new std::vector<Veggies*>;
    veggies->push_back(new Garlic());
    veggies->push_back(new Onion());
    veggies->push_back(new Mushroom());
    veggies->push_back(new RedPepper());

    return veggies;
}

Pepperoni* NYPizzaIngredientFactory::createPepperoni()
{
    return new SlicedPepperoni;
}

Clams* NYPizzaIngredientFactory::createClams()
{
    return new FreshClams;
}
