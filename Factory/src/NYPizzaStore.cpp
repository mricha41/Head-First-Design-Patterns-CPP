#include "NYPizzaStore.hpp"

#include "NYPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "PepperoniPizza.hpp"
#include "ClamPizza.hpp"
#include "VeggiePizza.hpp"

NYPizzaStore::NYPizzaStore()
{

}

NYPizzaStore::~NYPizzaStore()
{

}

Pizza* NYPizzaStore::createPizza(std::string type)
{
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory;

    if(type == "cheese")
    {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    }

    else if(type == "pepperoni")
    {
        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("New York Style Pepperoni Pizza");
    }

    else if(type == "veggie")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("New York Style Veggie Pizza");
    }

    else if(type == "clam")
    {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("New York Style Clam Pizza");
    }

    return pizza;
}
