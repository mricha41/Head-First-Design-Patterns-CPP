#ifndef FLYNOWAY_HPP
#define FLYNOWAY_HPP

#include <iostream>

#include "FlyBehavior.hpp"

class FlyNoWay : public FlyBehavior
{
    public:
        FlyNoWay();
        virtual ~FlyNoWay();

        void fly() override;
};

#endif // FLYNOWAY_HPP
