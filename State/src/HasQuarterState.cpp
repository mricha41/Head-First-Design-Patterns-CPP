#include "HasQuarterState.hpp"

#include <iostream>

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
:
    State(),
    m_gumballMachine(gumballMachine)
{

}

HasQuarterState::~HasQuarterState()
{

}

void HasQuarterState::insertQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You can't insert another quarter\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}

void HasQuarterState::ejectQuarter()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "Quarter returned\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
    m_gumballMachine->setState(m_gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "You turned...\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;

    std::random_device random;
    std::mt19937 randomEngine(random());
    std::uniform_int_distribution<int> uniformDistribution(0, (int)m_gumballMachine->getCount());

    //a little better IMHO...
    int winner = uniformDistribution(randomEngine);
    int drawNumber = uniformDistribution(randomEngine);

    std::cout<<"Winning number: "<<std::to_string(winner)<<std::endl;
    //std::cout<<"Drawn number: "<<std::to_string(drawNumber)<<std::endl;

    if(winner == drawNumber && m_gumballMachine->getCount() > 0)
    {
        m_gumballMachine->setState(m_gumballMachine->getWinnerState());
    }
    else
    {
        m_gumballMachine->setState(m_gumballMachine->getSoldState());
    }
}

void HasQuarterState::dispense()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "No gumball dispensed\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;
}
