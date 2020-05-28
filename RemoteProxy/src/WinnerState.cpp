#include "WinnerState.hpp"

#include <iostream>

WinnerState::WinnerState(GumballMachine* gumballMachine)
:
    State(),
    m_gumballMachine(gumballMachine)
{

}

WinnerState::~WinnerState()
{

}

void WinnerState::insertQuarter()
{
    std::cout<<
    "#################################################\n"
    "-------------------------------------------------\n"
    "Please wait, we're already giving you a gumball\n"
    "-------------------------------------------------\n"
    "#################################################"
    <<std::endl;
}

void WinnerState::ejectQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "Sorry, you already turned the crank\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void WinnerState::turnCrank()
{
    std::cout<<
    "###############################################\n"
    "-----------------------------------------------\n"
    "Turning twice doesn't get you another gumball!\n"
    "-----------------------------------------------\n"
    "###############################################"
    <<std::endl;
}

void WinnerState::dispense()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "YOU'RE A WINNER!\n"
    "You get two gumballs for your quarter\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
    if(m_gumballMachine->getCount() > 0)
        m_gumballMachine->releaseBall();
    if(m_gumballMachine->getCount() == 0)
    {
        m_gumballMachine->setState(m_gumballMachine->getSoldOutState());
    }
    else
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
            "Oops, out of gumballs!\n"
            "---------------------------------------------\n"
            "#############################################"
            <<std::endl;
            m_gumballMachine->setState(m_gumballMachine->getSoldOutState());
        }
    }
}
