#include "PizzaOrder.hpp"

PizzaOrder::PizzaOrder(PizzaStore* store, std::string order, std::string customer)
{
    m_typeOfPizza = order;
    m_store = store;
    m_pizza = m_store->orderPizza(m_typeOfPizza);
    m_customer = customer;
    customerOrderPizza(m_store, m_typeOfPizza, m_customer);
}

void PizzaOrder::customerOrderPizza(PizzaStore* store, std::string order, std::string customer)
{
    std::cout<<
    "#####################################################################################\n"
    "-------------------------------------------------------------------------------------\n"
    << m_customer <<
    " ordered a " <<
    m_pizza->getName() <<
    "\n-------------------------------------------------------------------------------------\n"
    "#####################################################################################\n"
    <<std::endl;
}

PizzaOrder::~PizzaOrder()
{
    delete m_pizza;
    delete m_store;
}

void PizzaOrder::printPizzaIngredients()
{
    std::cout << m_pizza->toString() << std::endl;
}
