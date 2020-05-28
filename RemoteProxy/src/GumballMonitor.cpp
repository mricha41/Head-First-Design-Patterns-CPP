#include "GumballMonitor.hpp"

#include <iostream>

GumballMonitor::GumballMonitor(GumballMachine* machine)
:
	m_machine(machine)
{
}

GumballMonitor::~GumballMonitor()
{
}

void GumballMonitor::report()
{
	std::cout << m_machine->toString();
}
