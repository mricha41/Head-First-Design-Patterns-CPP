#ifndef SOY_HPP
#define SOY_HPP

#include "CondimentDecorator.hpp"

class Soy : public CondimentDecorator
{
    public:
        Soy();
        Soy(Beverage* beverage);
        virtual ~Soy();

        std::string getDescription() override
        {
            return m_beverage->getDescription() + ", Soy";
        }

        double cost() override { return .15 + m_beverage->cost(); }
};

#endif // SOY_HPP
