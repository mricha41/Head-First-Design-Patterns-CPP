#include <iostream>
#include <string>

#include "GumballMachine.hpp"
#include "GumballMonitor.hpp"

int main(int argc, char** argv)
{
    GumballMachine* gumballMachine = nullptr;

    if (argc == 3)
        gumballMachine = new GumballMachine(argv[1], std::stoi(argv[2]));
    else
        gumballMachine = new GumballMachine("Kennesaw", 5);
    
    GumballMonitor monitor(gumballMachine);
    monitor.report();

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    monitor.report();

    delete gumballMachine;

    return 0;
}
