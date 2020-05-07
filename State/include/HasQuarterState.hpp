#ifndef HASQUARTERSTATE_HPP
#define HASQUARTERSTATE_HPP

#include <random>

#include "State.hpp"
#include "GumballMachine.hpp"

class HasQuarterState : public State
{
    private:
        HasQuarterState(){};
    public:
        HasQuarterState(GumballMachine* gumballMachine);
        virtual ~HasQuarterState();

        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;

    private:
        GumballMachine* m_gumballMachine;
};

#endif // HASQUARTERSTATE_HPP
