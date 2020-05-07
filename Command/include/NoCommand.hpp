#ifndef NOCOMMAND_HPP
#define NOCOMMAND_HPP

#include <iostream>

#include "Command.hpp"

class NoCommand : public Command
{
public:
	NoCommand() {};
	~NoCommand() {};

	//does nothing! you believe that?!?
	virtual void execute() { std::cout << "NO COMMAND ASSIGNED - NULL OBJECT" << std::endl; };
};

#endif //NOCOMMAND_HPP
