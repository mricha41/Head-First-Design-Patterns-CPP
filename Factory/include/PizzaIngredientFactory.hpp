#ifndef PIZZAINGREDIENTFACTORY_HPP
#define PIZZAINGREDIENTFACTORY_HPP

#include <vector>

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Veggies.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"

class PizzaIngredientFactory
{
    public:
        PizzaIngredientFactory();
        virtual ~PizzaIngredientFactory();

        virtual Dough* createDough() = 0;
        virtual Cheese* createCheese() = 0;
        virtual Sauce* createSauce() = 0;
        virtual std::vector<Veggies*>* createVeggies() = 0;
        virtual Pepperoni* createPepperoni() = 0;
        virtual Clams* createClams() = 0;
};

#endif // PIZZAINGREDIENTFACTORY_HPP
