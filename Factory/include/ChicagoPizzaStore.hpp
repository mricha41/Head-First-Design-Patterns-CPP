#ifndef CHICAGOPIZZASTORE_HPP
#define CHICAGOPIZZASTORE_HPP

#include "PizzaStore.hpp"

class ChicagoPizzaStore : public PizzaStore
{
    public:
        ChicagoPizzaStore();
        virtual ~ChicagoPizzaStore();

        Pizza* createPizza(std::string type) override;
};

#endif // CHICAGOPIZZASTORE_HPP
