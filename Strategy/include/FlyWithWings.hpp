#ifndef FLYWITHWINGS_HPP
#define FLYWITHWINGS_HPP

#include <iostream>

#include "FlyBehavior.hpp"

class FlyWithWings : public FlyBehavior
{
    public:
        FlyWithWings();
        virtual ~FlyWithWings();

        void fly() override;
};

#endif // FLYWITHWINGS_HPP
