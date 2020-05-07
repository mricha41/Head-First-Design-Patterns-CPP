#ifndef TVONCOMMAND_HPP
#define TVONCOMMAND_HPP

#include "Command.hpp"

class TV;

class TVOnCommand : public Command
{
public:
	TVOnCommand();
	TVOnCommand(TV* tv);

	~TVOnCommand();

	virtual void execute();

	virtual void undo();

private:
	TV* m_tv;
};

#endif //TVONCOMMAND_HPP

