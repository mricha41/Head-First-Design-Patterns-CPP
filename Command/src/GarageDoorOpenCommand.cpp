#include "GarageDoorOpenCommand.hpp"

#include "GarageDoor.hpp"

GarageDoorOpenCommand::GarageDoorOpenCommand()
:
	m_door(nullptr)
{

}

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* door)
:
	m_door(door)
{

}

GarageDoorOpenCommand::~GarageDoorOpenCommand()
{
	
}

void GarageDoorOpenCommand::execute()
{
	m_door->open();
}

void GarageDoorOpenCommand::undo()
{
	m_door->close();
}
