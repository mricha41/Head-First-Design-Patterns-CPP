#ifndef QUACK_HPP
#define QUACK_HPP

#include <iostream>

#include "QuackBehavior.hpp"

class Quack : public QuackBehavior
{
    public:
        Quack();
        virtual ~Quack();

        void quack() override;
};

#endif // QUACK_HPP
