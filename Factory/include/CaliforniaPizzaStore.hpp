#ifndef CALIFORNIAPIZZASTORE_HPP
#define CALIFORNIAPIZZASTORE_HPP

#include "PizzaStore.hpp"
#include "CheesePizza.hpp"

class CaliforniaPizzaStore : public PizzaStore
{
    public:
        CaliforniaPizzaStore();
        virtual ~CaliforniaPizzaStore();

        Pizza* createPizza(std::string type) override;
};

#endif // CALIFORNIAPIZZASTORE_HPP
