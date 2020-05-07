#ifndef PEPPERONIPIZZA_HPP
#define PEPPERONIPIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class PepperoniPizza : public Pizza
{
    public:
        PepperoniPizza();
        PepperoniPizza(PizzaIngredientFactory* ingredientFactory);
        virtual ~PepperoniPizza();

        void prepare() override;

    protected:
        PizzaIngredientFactory* m_ingredientFactory;
};

#endif // PEPPERONIPIZZA_HPP
