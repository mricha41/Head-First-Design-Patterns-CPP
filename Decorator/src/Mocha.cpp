#include "Mocha.hpp"

Mocha::Mocha()
:
    CondimentDecorator()
{

}

Mocha::Mocha(Beverage* beverage)
:
    CondimentDecorator()
{
    m_beverage = beverage;
}

Mocha::~Mocha()
{

}
