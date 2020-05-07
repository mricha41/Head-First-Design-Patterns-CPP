#include "PizzaOrder.hpp"

int main()
{
    PizzaOrder nyOrder(new NYPizzaStore, "pepperoni", "Alex");
    nyOrder.printPizzaIngredients();

    PizzaOrder chicagoOrder(new ChicagoPizzaStore, "veggie", "Sammy");
    chicagoOrder.printPizzaIngredients();

    PizzaOrder caliOrder(new CaliforniaPizzaStore, "clam", "Kelsey");
    caliOrder.printPizzaIngredients();

    return 0;
}
