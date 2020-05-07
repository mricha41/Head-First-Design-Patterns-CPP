#include "SteamedMilk.hpp"

SteamedMilk::SteamedMilk()
:
    CondimentDecorator()
{

}

SteamedMilk::SteamedMilk(Beverage* beverage)
:
    CondimentDecorator()
{
    m_beverage = beverage;
}

SteamedMilk::~SteamedMilk()
{

}
