#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "CondimentDecorator.hpp"

class Mocha : public CondimentDecorator
{
    public:
        Mocha();
        Mocha(Beverage* beverage);
        virtual ~Mocha();

        std::string getDescription() override
        {
            return m_beverage->getDescription() + ", Mocha";
        }

        double cost() override { return .20 + m_beverage->cost(); }
};

#endif // MOCHA_HPP
