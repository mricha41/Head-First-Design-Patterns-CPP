#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include <iostream>

#include "QuackBehavior.hpp"

class Squeak : public QuackBehavior
{
    public:
        Squeak();
        virtual ~Squeak();

        void quack() override;
};

#endif // SQUEAK_HPP
