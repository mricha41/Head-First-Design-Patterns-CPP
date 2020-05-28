#include "NoQuarterState.hpp"

#include <iostream>

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine)
:
    State(),
    m_gumballMachine(gumballMachine)
{

}

NoQuarterState::~NoQuarterState()
{

}

void NoQuarterState::insertQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You inserted a quarter\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
    m_gumballMachine->setState(m_gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You have NOT inserted a quarter\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void NoQuarterState::turnCrank()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You turned, but there's no quarter\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void NoQuarterState::dispense()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You need to pay first\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}
