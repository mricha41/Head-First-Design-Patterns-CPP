#include "CaliforniaPizzaStore.hpp"

#include "CaliforniaPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"

CaliforniaPizzaStore::CaliforniaPizzaStore()
{

}

CaliforniaPizzaStore::~CaliforniaPizzaStore()
{

}

Pizza* CaliforniaPizzaStore::createPizza(std::string type)
{
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new CaliforniaPizzaIngredientFactory(type);

    if(type == "cheese")
    {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("California Style Cheese Pizza");
    }

    else if(type == "pepperoni")
    {
        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("California Style Pepperoni Pizza");
    }

    else if(type == "veggie")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("California Style Veggie Pizza");
    }

    else if(type == "clam")
    {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("California Style Clam Pizza");
    }

    return pizza;
}
