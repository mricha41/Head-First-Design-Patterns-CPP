#ifndef DARKROAST_HPP
#define DARKROAST_HPP

#include "Beverage.hpp"

class DarkRoast : public Beverage
{
    public:
        DarkRoast();
        virtual ~DarkRoast();

        double cost() override { return .99; }
};

#endif // DARKROAST_HPP
