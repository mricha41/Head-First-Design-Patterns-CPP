#include <iostream>

#include "GumballMachine.hpp"

int main()
{
    GumballMachine* gumballMachine = new GumballMachine(5);
    std::cout<<gumballMachine->toString()<<std::endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout<<gumballMachine->toString()<<std::endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout<<gumballMachine->toString()<<std::endl;

    delete gumballMachine;

    return 0;
}
