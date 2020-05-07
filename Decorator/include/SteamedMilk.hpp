#ifndef STEAMEDMILK_HPP
#define STEAMEDMILK_HPP

#include "CondimentDecorator.hpp"

class SteamedMilk : public CondimentDecorator
{
    public:
        SteamedMilk();
        SteamedMilk(Beverage* beverage);
        virtual ~SteamedMilk();

        std::string getDescription() override
        {
            return m_beverage->getDescription() + ", Steamed Milk";
        }

        double cost() override { return .10 + m_beverage->cost(); }
};

#endif // STEAMEDMILK_HPP
