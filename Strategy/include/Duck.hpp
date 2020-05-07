#ifndef DUCK_HPP
#define DUCK_HPP

#include <iostream>

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck
{
    public:
        Duck();
        virtual ~Duck();

        virtual void display(){};

        void performFly();

        void performQuack();

        void swim();

        void setFlyBehavior(FlyBehavior* b)
        {
            m_flyBehavior = b;
        }
        void setQuackBehavior(QuackBehavior* b)
        {
            m_quackBehavior = b;
        }

    protected:
        FlyBehavior* m_flyBehavior;
        QuackBehavior* m_quackBehavior;
};

#endif // DUCK_HPP
