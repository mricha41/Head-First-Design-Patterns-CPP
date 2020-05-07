#ifndef VEGGIEPIZZA_HPP
#define VEGGIEPIZZA_HPP

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class VeggiePizza : public Pizza
{
    public:
        VeggiePizza();
        VeggiePizza(PizzaIngredientFactory* ingredientFactory);
        virtual ~VeggiePizza();

        void prepare() override;

    protected:
        PizzaIngredientFactory* m_ingredientFactory;
};

#endif // VEGGIEPIZZA_HPP
