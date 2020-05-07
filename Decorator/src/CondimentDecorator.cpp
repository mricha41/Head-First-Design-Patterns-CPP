#include "CondimentDecorator.hpp"

CondimentDecorator::CondimentDecorator()
:
    Beverage(),
    m_beverage(nullptr)
{

}

CondimentDecorator::CondimentDecorator(Beverage* beverage)
:
    Beverage(),
    m_beverage(beverage)
{

}

CondimentDecorator::~CondimentDecorator()
{
    delete m_beverage;
    m_beverage = nullptr;
}
