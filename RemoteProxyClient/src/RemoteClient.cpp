#include "RemoteClient.hpp"

RemoteClient::RemoteClient(std::string ip, std::uint32_t port)
:
	m_client(ip, port)
{

}

RemoteClient::~RemoteClient()
{

}

void RemoteClient::call(std::string function)
{
	m_client.call(function);
}
