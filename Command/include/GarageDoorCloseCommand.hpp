#ifndef GARAGEDOORCLOSECOMMAND_HPP
#define GARAGEDOORCLOSECOMMAND_HPP

#include "Command.hpp"

class GarageDoor;

class GarageDoorCloseCommand : public Command
{
public:
	GarageDoorCloseCommand();
	GarageDoorCloseCommand(GarageDoor* door);
	~GarageDoorCloseCommand();

	virtual void execute();

	virtual void undo();

private:
	GarageDoor* m_door;
};

#endif //GARAGEDOORCLOSECOMMAND_HPP


