#include "Remote.hpp"

Remote::Remote(std::uint32_t port)
:
	m_server(port)
{

}

Remote::~Remote()
{

}

void Remote::run()
{
	m_server.run();
}
