#include "SoldState.hpp"

#include <iostream>

SoldState::SoldState(GumballMachine* gumballMachine)
:
    State(),
    m_gumballMachine(gumballMachine)
{

}

SoldState::~SoldState()
{

}

void SoldState::insertQuarter()
{
    std::cout<<
    "#################################################\n"
    "-------------------------------------------------\n"
    "Please wait, we're already giving you a gumball\n"
    "-------------------------------------------------\n"
    "#################################################"
    <<std::endl;
}

void SoldState::ejectQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "Sorry, you already turned the crank\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void SoldState::turnCrank()
{
    std::cout<<
    "###############################################\n"
    "-----------------------------------------------\n"
    "Turning twice doesn't get you another gumball!\n"
    "-----------------------------------------------\n"
    "###############################################"
    <<std::endl;
}

void SoldState::dispense()
{
    if(m_gumballMachine->getCount() > 0)
    {
        m_gumballMachine->releaseBall();
        m_gumballMachine->setState(m_gumballMachine->getNoQuarterState());
    }
    else
    {
        std::cout<<
        "#############################################\n"
        "---------------------------------------------\n"
        "Oops...out of gumballs!\n"
        "---------------------------------------------\n"
        "#############################################"
        <<std::endl;
        m_gumballMachine->setState(m_gumballMachine->getSoldOutState());
    }
}
