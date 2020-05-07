#include "CheesePizza.hpp"

CheesePizza::CheesePizza()
:
    Pizza(),
    m_ingredientFactory(nullptr)
{

}

CheesePizza::CheesePizza(PizzaIngredientFactory* ingredientFactory)
:
    Pizza()
{
    m_ingredientFactory = ingredientFactory;
}

CheesePizza::~CheesePizza()
{

}

void CheesePizza::prepare()
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
}
