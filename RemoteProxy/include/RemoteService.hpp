#ifndef REMOTESERVICE_HPP
#define REMOTESERVICE_HPP

#include "GumballMachine.hpp"
#include "GumballMonitor.hpp"
#include "Remote.hpp"

class RemoteService
{
public:
	RemoteService() = delete;
	RemoteService(std::string location, std::size_t numberGumballs);

	~RemoteService();

	void foo();

private:
	GumballMachine* m_machine;
	GumballMonitor* m_monitor;
	Remote* m_remote;
};

#endif //REMOTESERVICE_HPP