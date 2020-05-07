#include <iostream>

#include "MallardDuck.hpp"
#include "ModelDuck.hpp"
#include "FlyRocketPowered.hpp"

int main()
{
    Duck* mallard = new MallardDuck();
    mallard->display();
    mallard->performQuack();
    mallard->performFly();

    Duck* model = new ModelDuck();
    model->display();
    model->performQuack();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();

    delete mallard;
    mallard = nullptr;
    delete model;
    model = nullptr;

    return 0;
}
