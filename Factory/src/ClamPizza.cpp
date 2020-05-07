#include "ClamPizza.hpp"

ClamPizza::ClamPizza()
{

}

ClamPizza::ClamPizza(PizzaIngredientFactory* ingredientFactory)
:
    Pizza()
{
    m_ingredientFactory = ingredientFactory;
}

ClamPizza::~ClamPizza()
{

}

void ClamPizza::prepare()
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
    m_clams = m_ingredientFactory->createClams();
}
