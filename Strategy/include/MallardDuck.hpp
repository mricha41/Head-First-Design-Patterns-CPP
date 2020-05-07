#ifndef MALLARDDUCK_HPP
#define MALLARDDUCK_HPP

#include <iostream>

#include "Duck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"

class MallardDuck : public Duck
{
    public:
        MallardDuck();
        virtual ~MallardDuck();

        void display() override;
};

#endif // MALLARDDUCK_HPP
