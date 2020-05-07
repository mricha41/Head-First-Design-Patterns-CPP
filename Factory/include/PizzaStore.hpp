#ifndef PIZZASTORE_HPP
#define PIZZASTORE_HPP

#include <string>

#include "Pizza.hpp"

class PizzaStore
{
    public:
        PizzaStore();
        virtual ~PizzaStore();

        Pizza* orderPizza(std::string type);

    protected:
        virtual Pizza* createPizza(std::string type) = 0;
};

#endif // PIZZASTORE_HPP
