#include "MallardDuck.hpp"

MallardDuck::MallardDuck()
{
    m_quackBehavior = new Quack();
    m_flyBehavior = new FlyWithWings();
}

MallardDuck::~MallardDuck()
{
    delete m_quackBehavior;
    m_quackBehavior = nullptr;
    delete m_flyBehavior;
    m_flyBehavior = nullptr;
}

void MallardDuck::display()
{
    std::cout<<
        "-----------------------\n"
        "#######################\n"
        "I'm a real Mallard duck\n"
        "#######################\n"
        "-----------------------"
    <<std::endl;
}
