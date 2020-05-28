#ifndef SOLDOUTSTATE_HPP
#define SOLDOUTSTATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

class SoldOutState : public State
{
    private:
        SoldOutState(){};
    public:
        SoldOutState(GumballMachine* gumballMachine);
        virtual ~SoldOutState();

        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;

    private:
        GumballMachine* m_gumballMachine;
};

#endif // SOLDOUTSTATE_HPP
