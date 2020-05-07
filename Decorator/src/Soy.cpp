#include "Soy.hpp"

Soy::Soy()
:
    CondimentDecorator()
{

}

Soy::Soy(Beverage* beverage)
:
    CondimentDecorator()
{
    m_beverage = beverage;
}

Soy::~Soy()
{

}
