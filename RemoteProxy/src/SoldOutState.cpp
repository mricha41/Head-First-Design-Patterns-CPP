#include "SoldOutState.hpp"

#include <iostream>

SoldOutState::SoldOutState(GumballMachine* gumballMachine)
:
    State(),
    m_gumballMachine(gumballMachine)
{

}

SoldOutState::~SoldOutState()
{

}

void SoldOutState::insertQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "Oops...out of gumballs!\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void SoldOutState::ejectQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You have NOT inserted a quarter\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void SoldOutState::turnCrank()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You turned, but there's no quarter...\n"
    "and the machine is sold out of gumballs"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void SoldOutState::dispense()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "No gumball dispensed\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}
