#ifndef CALIFORNIAPIZZAINGREDIENTFACTORY_HPP
#define CALIFORNIAPIZZAINGREDIENTFACTORY_HPP

#include "PizzaIngredientFactory.hpp"

class CaliforniaPizzaIngredientFactory : public PizzaIngredientFactory
{
    private:
        CaliforniaPizzaIngredientFactory(){};
    public:
        CaliforniaPizzaIngredientFactory(std::string type);
        virtual ~CaliforniaPizzaIngredientFactory();

        Dough* createDough() override;
        Cheese* createCheese() override;
        Sauce* createSauce() override;
        std::vector<Veggies*>* createVeggies() override;
        Pepperoni* createPepperoni() override;
        Clams* createClams() override;

    private:
        std::string m_pizzaType;
};

#endif // CALIFORNIAPIZZAINGREDIENTFACTORY_HPP
