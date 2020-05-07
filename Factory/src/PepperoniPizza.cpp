#include "PepperoniPizza.hpp"

PepperoniPizza::PepperoniPizza()
{

}

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory* ingredientFactory)
:
    Pizza()
{
    m_ingredientFactory = ingredientFactory;
}

PepperoniPizza::~PepperoniPizza()
{

}

void PepperoniPizza::prepare()
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
    m_pepperoni = m_ingredientFactory->createPepperoni();
}
