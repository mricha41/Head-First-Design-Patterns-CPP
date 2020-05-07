#ifndef GARAGEDOOROPENCOMMAND_HPP
#define GARAGEDOOROPENCOMMAND_HPP

#include "Command.hpp"

class GarageDoor;

class GarageDoorOpenCommand : public Command
{
public:
	GarageDoorOpenCommand();
	GarageDoorOpenCommand(GarageDoor* door);
	~GarageDoorOpenCommand();

	virtual void execute();

	virtual void undo();

private:
	GarageDoor* m_door;
};

#endif //GARAGEDOOROPENCOMMAND_HPP


