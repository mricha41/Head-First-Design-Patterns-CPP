#ifndef GUMBALLMACHINE_HPP
#define GUMBALLMACHINE_HPP

#include <iostream>
#include <string>

#include "State.hpp"

class GumballMachine
{
    public:
        GumballMachine() = delete;
        GumballMachine(std::string location, std::size_t numberGumballs);
        ~GumballMachine();

        void insertQuarter();
        void ejectQuarter();
        void turnCrank();
        void setState(State* state);
        //State* getState() { return m_state; };
        void releaseBall();

        State* getSoldOutState() { return m_soldOutState; };
        State* getNoQuarterState() { return m_noQuarterState; };
        State* getHasQuarterState() { return m_hasQuarterState; };
        State* getSoldState() { return m_soldState; };
        State* getWinnerState() { return m_winnerState; };
        std::string getLocation() { return m_location; };
        std::size_t getCount() { return m_count; };
        std::string toString();

    private:
        State* m_soldOutState;
        State* m_noQuarterState;
        State* m_hasQuarterState;
        State* m_soldState;
        State* m_winnerState;
        State* m_state;
        std::string m_location;
        std::size_t m_count;
};

#endif // GUMBALLMACHINE_HPP
