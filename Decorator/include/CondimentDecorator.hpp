#ifndef CONDIMENTDECORATOR_HPP
#define CONDIMENTDECORATOR_HPP

#include "Beverage.hpp"

class CondimentDecorator : public Beverage
{
    public:
        CondimentDecorator();
        CondimentDecorator(Beverage* beverage);
        virtual ~CondimentDecorator();

        virtual std::string getDescription(){ return m_beverage->getDescription(); }

        virtual double cost(){ return m_beverage->cost(); }

    protected:
        Beverage* m_beverage;
};

#endif // CONDIMENTDECORATOR_HPP
