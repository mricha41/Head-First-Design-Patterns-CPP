#include <iostream>
#include <string>

#include "Remote.hpp"
#include "RemoteService.hpp"

int main(int argc, char** argv)
{
    RemoteService* service = nullptr;
    if (argc == 3)
        service = new RemoteService(argv[1], std::stoi(argv[2]));
    else
       service = new RemoteService("Kennesaw", 5);

    return 0;
}
