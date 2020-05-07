#include "Pizza.hpp"

Pizza::Pizza()
:
    m_name(""),
    m_dough(nullptr),
    m_sauce(nullptr),
    m_cheese(nullptr),
    m_veggies(nullptr),
    m_pepperoni(nullptr),
    m_clams(nullptr)
{

}

Pizza::~Pizza()
{

}

void Pizza::bake()
{
    std::cout<<
    "#####################################\n"
    "-------------------------------------\n"
    "Bake for 25 minutes at 350\n"
    "-------------------------------------\n"
    "#####################################\n"
    <<std::endl;
}

void Pizza::cut()
{
    std::cout<<
    "#####################################\n"
    "-------------------------------------\n"
    "Cutting pizza into diagonal slices\n"<<
    "-------------------------------------\n"
    "#####################################\n"
    <<std::endl;
}

void Pizza::box()
{
    std::cout<<
    "############################################\n"
    "--------------------------------------------\n"
    "Place pizza in the official PizzaStore box\n"<<
    "--------------------------------------------\n"
    "############################################\n"
    <<std::endl;
}

std::string Pizza::toString()
{
    using std::string;
    string str = string("####################################################################\n") +
    string("--------------------------------------------------------------------\n") +
    m_name +
    string(" ingredients:\n") +
    m_dough->toString() + string(", ") +
    m_sauce->toString() + string(", ") +
    m_cheese->toString();

    if(m_veggies != nullptr)
    {
        str = str + string(",\n");
        for(auto&& i : *m_veggies)
        {
            if(i != m_veggies->back())
                str = str + i->toString() + string(", ");
            else
                str = str + i->toString();
        }
    }

    if(m_pepperoni != nullptr)
        str = str + string(",\n") + m_pepperoni->toString();

    if(m_clams != nullptr)
        str = str + string(",\n") + m_clams->toString();

    str = str + string("\n--------------------------------------------------------------------\n") +
    string("####################################################################\n");

    return str;
}
