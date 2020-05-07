#ifndef NYPIZZASTORE_HPP
#define NYPIZZASTORE_HPP

#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore
{
    public:
        NYPizzaStore();
        virtual ~NYPizzaStore();

        Pizza* createPizza(std::string type) override;
};

#endif // NYPIZZASTORE_HPP
