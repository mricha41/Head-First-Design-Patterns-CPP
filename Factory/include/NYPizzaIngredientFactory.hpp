#ifndef NYPIZZAINGREDIENTFACTORY_HPP
#define NYPIZZAINGREDIENTFACTORY_HPP

#include <vector>

#include "PizzaIngredientFactory.hpp"
#include "ThinCrustDough.hpp"
#include "MarinaraSauce.hpp"
#include "ReggianoCheese.hpp"
#include "Veggies.hpp"
#include "SlicedPepperoni.hpp"
#include "FreshClams.hpp"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
    public:
        NYPizzaIngredientFactory();
        virtual ~NYPizzaIngredientFactory();

        Dough* createDough() override;
        Cheese* createCheese() override;
        Sauce* createSauce() override;
        std::vector<Veggies*>* createVeggies() override;
        Pepperoni* createPepperoni() override;
        Clams* createClams() override;
};

#endif // NYPIZZAINGREDIENTFACTORY_HPP
