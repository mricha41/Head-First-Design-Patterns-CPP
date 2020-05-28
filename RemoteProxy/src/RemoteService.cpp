#include "RemoteService.hpp"

#include <iostream>

RemoteService::RemoteService(std::string location, std::size_t numberGumballs)
{
    m_machine = new GumballMachine(location, numberGumballs);
    
    m_monitor = new GumballMonitor(m_machine);

    m_remote = new Remote(8080);
    
    m_remote->registerFunction("report", [this]() { this->m_monitor->report(); });
    m_remote->registerFunction("insertQuarter", [this]() { this->m_machine->insertQuarter(); });
    m_remote->registerFunction("turnCrank", [this]() { this->m_machine->turnCrank(); });
    m_remote->run();
}

RemoteService::~RemoteService()
{
    delete m_machine;
    m_machine = nullptr;
    delete m_monitor;
    m_monitor = nullptr;
}
