#ifndef PIZZAORDER_HPP
#define PIZZAORDER_HPP

#include <iostream>

#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include "CaliforniaPizzaStore.hpp"

class PizzaOrder
{

private:
    PizzaOrder() {};
    void customerOrderPizza(PizzaStore* store, std::string order, std::string customer);

public:
    PizzaOrder(PizzaStore* store, std::string order, std::string customer);

    ~PizzaOrder();

    void printPizzaIngredients();

private:
    Pizza* m_pizza;
    PizzaStore* m_store;
    std::string m_customer;
    std::string m_typeOfPizza;
};

#endif // PIZZAORDER_HPP
