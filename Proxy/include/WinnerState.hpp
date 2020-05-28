#ifndef WINNERSTATE_HPP
#define WINNERSTATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

class WinnerState : public State
{
    private:
        WinnerState(){};
    public:
        WinnerState(GumballMachine* gumballMachine);
        virtual ~WinnerState();

        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;

    private:
        GumballMachine* m_gumballMachine;
};

#endif // WINNERSTATE_HPP
