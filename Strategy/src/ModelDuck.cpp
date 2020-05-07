#include "ModelDuck.hpp"

ModelDuck::ModelDuck()
{
    m_flyBehavior = new FlyNoWay();
    m_quackBehavior = new Quack();
}

ModelDuck::~ModelDuck()
{
    delete m_quackBehavior;
    m_quackBehavior = nullptr;
    delete m_flyBehavior;
    m_flyBehavior = nullptr;
}

void ModelDuck::display()
{
    std::cout<<
        "-----------------------\n"
        "#######################\n"
        "I'm a model duck\n"
        "#######################\n"
        "-----------------------"
    <<std::endl;
}
