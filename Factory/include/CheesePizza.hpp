#ifndef CHEESEPIZZA_HPP
#define CHEESEPIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class CheesePizza : public Pizza
{
    public:
        CheesePizza();
        CheesePizza(PizzaIngredientFactory* ingredientFactory);
        virtual ~CheesePizza();

        void prepare() override;

    protected:
        PizzaIngredientFactory* m_ingredientFactory;
};

#endif // CHEESEPIZZA_HPP
