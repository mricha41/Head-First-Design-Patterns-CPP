#include "Whip.hpp"

Whip::Whip()
:
    CondimentDecorator()
{

}

Whip::Whip(Beverage* beverage)
:
    CondimentDecorator()
{
    m_beverage = beverage;
}

Whip::~Whip()
{

}
