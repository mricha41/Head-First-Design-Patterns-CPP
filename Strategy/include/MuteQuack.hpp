#ifndef MUTEQUACK_HPP
#define MUTEQUACK_HPP

#include <iostream>

#include "QuackBehavior.hpp"

class MuteQuack : public QuackBehavior
{
    public:
        MuteQuack();
        virtual ~MuteQuack();

        void quack() override;
};

#endif // MUTEQUACK_HPP
