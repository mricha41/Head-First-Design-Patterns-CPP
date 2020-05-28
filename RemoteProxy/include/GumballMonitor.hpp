#ifndef GUMBALLMONITOR_HPP
#define GUMBALLMONITOR_HPP

#include "GumballMachine.hpp"

class GumballMonitor
{
public:
	GumballMonitor() = delete;
	GumballMonitor(GumballMachine* machine);

	~GumballMonitor();

	void report();

private:
	GumballMachine* m_machine;
};

#endif //GUMBALLMONITOR_HPP
