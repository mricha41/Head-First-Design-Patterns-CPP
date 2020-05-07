#ifndef TVOFFCOMMAND_HPP
#define TVOFFCOMMAND_HPP

#include "Command.hpp"

class TV;

class TVOffCommand : public Command
{
public:
	TVOffCommand();
	TVOffCommand(TV* tv);

	~TVOffCommand();

	virtual void execute();

	virtual void undo();

private:
	TV* m_tv;
};

#endif //TVONCOMMAND_HPP

