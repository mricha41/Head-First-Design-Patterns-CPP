#ifndef REMOTE_HPP
#define REMOTE_HPP

#include <string>

#include "rpc/server.h"

class Remote
{
public:

    Remote() = delete;
    Remote(std::uint32_t port);

    ~Remote();

    template <typename T>
    void registerFunction(std::string name, T function);

    void run();

private:
    rpc::server m_server;
};

template <typename T>
void Remote::registerFunction(std::string name, T function)
{
    m_server.bind(name, function);
}

#endif //REMOTE_HPP