#ifndef NOQUARTERSTATE_HPP
#define NOQUARTERSTATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

class NoQuarterState : public State
{
    private:
        NoQuarterState(){};
    public:
        NoQuarterState(GumballMachine* gumballMachine);
        virtual ~NoQuarterState();

        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;
    private:
        GumballMachine* m_gumballMachine;
};

#endif // NOQUARTERSTATE_HPP
