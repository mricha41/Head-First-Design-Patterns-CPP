#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Beverage.hpp"

class Espresso : public Beverage
{
    public:
        Espresso();
        virtual ~Espresso();

        double cost() override { return 1.99; }
};

#endif // ESPRESSO_HPP
