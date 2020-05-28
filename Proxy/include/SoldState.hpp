#ifndef SOLDSTATE_HPP
#define SOLDSTATE_HPP

#include "State.hpp"
#include "GumballMachine.hpp"

class SoldState : public State
{
    private:
        SoldState(){};
    public:
        SoldState(GumballMachine* gumballMachine);
        virtual ~SoldState();

        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;

    private:
        GumballMachine* m_gumballMachine;
};

#endif // SOLDSTATE_HPP
