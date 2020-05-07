#ifndef CHICAGOPIZZAINGREDIENTFACTORY_HPP
#define CHICAGOPIZZAINGREDIENTFACTORY_HPP


#include <vector>

#include "PizzaIngredientFactory.hpp"
#include "ThinCrustDough.hpp"
#include "MarinaraSauce.hpp"
#include "ReggianoCheese.hpp"
#include "Veggies.hpp"
#include "SlicedPepperoni.hpp"
#include "FreshClams.hpp"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
    public:
        ChicagoPizzaIngredientFactory();
        virtual ~ChicagoPizzaIngredientFactory();

        Dough* createDough() override;
        Cheese* createCheese() override;
        Sauce* createSauce() override;
        std::vector<Veggies*>* createVeggies() override;
        Pepperoni* createPepperoni() override;
        Clams* createClams() override;
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_HPP
