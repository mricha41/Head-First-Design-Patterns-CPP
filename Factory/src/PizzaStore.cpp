#include "PizzaStore.hpp"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

Pizza* PizzaStore::orderPizza(std::string type)
{
    Pizza* pizza;
    pizza = createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
