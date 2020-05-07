#include "Duck.hpp"

Duck::Duck()
{

}

Duck::~Duck()
{

}

void Duck::performFly()
{
    m_flyBehavior->fly();
}

void Duck::performQuack()
{
    m_quackBehavior->quack();
}

void Duck::swim()
{
    std::cout<<"All ducks float, even decoys!"<<std::endl;
}
