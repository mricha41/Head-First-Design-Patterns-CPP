#ifndef REMOTECLIENT_HPP
#define REMOTECLIENT_HPP

#include <string>

#include "rpc/client.h"

class RemoteClient
{
public:
	RemoteClient() = delete;
	RemoteClient(std::string ip, std::uint32_t port);

	~RemoteClient();

	void call(std::string function);

private:
	rpc::client m_client;

};

#endif //REMOTECLIENT_HPP