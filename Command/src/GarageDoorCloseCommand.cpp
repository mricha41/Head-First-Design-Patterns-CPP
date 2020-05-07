#include "GarageDoorCloseCommand.hpp"

#include "GarageDoor.hpp"

GarageDoorCloseCommand::GarageDoorCloseCommand()
	:
	m_door(nullptr)
{

}

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor* door)
	:
	m_door(door)
{

}

GarageDoorCloseCommand::~GarageDoorCloseCommand()
{

}

void GarageDoorCloseCommand::execute()
{
	m_door->close();
}

void GarageDoorCloseCommand::undo()
{
	m_door->open();
}
