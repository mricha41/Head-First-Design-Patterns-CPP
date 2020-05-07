#ifndef CLAMPIZZA_HPP
#define CLAMPIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class ClamPizza : public Pizza
{
    public:
        ClamPizza();
        ClamPizza(PizzaIngredientFactory* ingredientFactory);
        virtual ~ClamPizza();

        void prepare() override;

    protected:
        PizzaIngredientFactory* m_ingredientFactory;
};

#endif // CLAMPIZZA_HPP
