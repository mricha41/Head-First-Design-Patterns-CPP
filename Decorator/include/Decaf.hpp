#ifndef DECAF_HPP
#define DECAF_HPP

#include "Beverage.hpp"

class Decaf : Beverage
{
    public:
        Decaf();
        virtual ~Decaf();

        double cost() override { return 1.05; }
};

#endif // DECAF_HPP
