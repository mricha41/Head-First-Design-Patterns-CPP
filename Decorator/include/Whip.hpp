#ifndef WHIP_HPP
#define WHIP_HPP

#include "CondimentDecorator.hpp"

class Whip : public CondimentDecorator
{
    public:
        Whip();
        Whip(Beverage* beverage);
        virtual ~Whip();

        std::string getDescription() override
        {
            return m_beverage->getDescription() + ", Whip";
        }

        double cost() override { return .10 + m_beverage->cost(); }
};

#endif // WHIP_HPP
