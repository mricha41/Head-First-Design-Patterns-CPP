#ifndef FLYROCKETPOWERED_HPP
#define FLYROCKETPOWERED_HPP

#include <iostream>

#include "FlyBehavior.hpp"

class FlyRocketPowered : public FlyBehavior
{
    public:
        FlyRocketPowered();
        virtual ~FlyRocketPowered();

        void fly() override;
};

#endif // FLYROCKETPOWERED_HPP
