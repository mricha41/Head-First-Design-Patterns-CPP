#ifndef MODELDUCK_HPP
#define MODELDUCK_HPP

#include "Duck.hpp"
#include "Quack.hpp"
#include "FlyNoWay.hpp"

class ModelDuck : public Duck
{
    public:
        ModelDuck();
        virtual ~ModelDuck();

        void display() override;
};

#endif // MODELDUCK_HPP
