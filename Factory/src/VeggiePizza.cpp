#include "VeggiePizza.hpp"

VeggiePizza::VeggiePizza()
{

}

VeggiePizza::VeggiePizza(PizzaIngredientFactory* ingredientFactory)
:
    Pizza()
{
    m_ingredientFactory = ingredientFactory;
}

VeggiePizza::~VeggiePizza()
{

}

void VeggiePizza::prepare()
{
    std::cout<<
    "#############################################################################\n"
    "-----------------------------------------------------------------------------\n"
    "Preparing "
    << m_name <<
    "\n-----------------------------------------------------------------------------\n"
    "#############################################################################\n"
    <<std::endl;

    m_dough = m_ingredientFactory->createDough();
    m_sauce = m_ingredientFactory->createSauce();
    m_cheese = m_ingredientFactory->createCheese();
    m_veggies = m_ingredientFactory->createVeggies();
}
