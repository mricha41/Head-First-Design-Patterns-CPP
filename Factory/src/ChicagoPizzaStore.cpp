#include "ChicagoPizzaStore.hpp"

#include "ChicagoPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"

ChicagoPizzaStore::ChicagoPizzaStore()
{

}

ChicagoPizzaStore::~ChicagoPizzaStore()
{

}

Pizza* ChicagoPizzaStore::createPizza(std::string type)
{
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory;

    if(type == "cheese")
    {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("Chicago Style Cheese Pizza");
    }

    else if(type == "pepperoni")
    {
        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("Chicago Style Pepperoni Pizza");
    }

    else if(type == "veggie")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("Chicago Style Veggie Pizza");
    }

    else if(type == "clam")
    {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("Chicago Style Clam Pizza");
    }

    return pizza;
}
