#include "GumballMachine.hpp"

#include "SoldOutState.hpp"
#include "NoQuarterState.hpp"
#include "HasQuarterState.hpp"
#include "SoldState.hpp"
#include "WinnerState.hpp"

GumballMachine::GumballMachine(std::size_t numberGumballs)
{
    m_soldOutState = new SoldOutState(this);
    m_noQuarterState = new NoQuarterState(this);
    m_hasQuarterState = new HasQuarterState(this);
    m_soldState = new SoldState(this);
    m_winnerState = new WinnerState(this);
    m_count = numberGumballs;
    if(m_count > 0)
        m_state = m_noQuarterState;
    else
        m_state = m_soldOutState;
}

GumballMachine::~GumballMachine()
{
    delete m_soldOutState;
    delete m_noQuarterState;
    delete m_hasQuarterState;
    delete m_soldState;
    delete m_winnerState;
}

void GumballMachine::insertQuarter()
{
    m_state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    m_state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    m_state->turnCrank();
    m_state->dispense();
}

void GumballMachine::setState(State* state)
{
    m_state = state;
}

void GumballMachine::releaseBall()
{
    std::cout<<
    "#############################################\n"
    "---------------------------------------------\n"
    "A gumball comes rolling out the slot...\n"
    "---------------------------------------------\n"
    "#############################################"
    <<std::endl;

    if(m_count > 0)
        m_count = m_count - 1;
}

std::string GumballMachine::toString()
{
    using std::string;
    string msg = "";
    msg = string("#############################################\n")
    + string("---------------------------------------------\n")
    + string("Mighty Gumball, Inc.\n")
    + string("Java-enabled Standing Gumball Model #2004\n")
    + string("Inventory: ")
    + std::to_string(m_count) + string("\n");

    if(m_count <= 0)
        msg = msg + string("Machine is sold out\n");
    else
        msg = msg + string("Machine is waiting for quarter\n");

    msg = msg + string("---------------------------------------------\n")
    + string("#############################################");

    return msg;
}
