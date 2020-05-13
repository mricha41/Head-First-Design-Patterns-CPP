#include "RemoteControl.hpp"

RemoteControl::RemoteControl()
:
	m_onCommands(nullptr),
	m_offCommands(nullptr),
	m_undoCommand(nullptr)
{
	
}

RemoteControl::~RemoteControl()
{

}

void RemoteControl::setCommand(std::size_t button, Command* onCommand, Command* offCommand)
{
	(*m_onCommands)[button] = onCommand;
	(*m_offCommands)[button] = offCommand;
}

void RemoteControl::onButtonPressed(std::size_t button)
{
	(*m_onCommands)[button]->execute();
	m_undoCommand = (*m_onCommands)[button];
}

void RemoteControl::offButtonPressed(std::size_t button)
{
	(*m_offCommands)[button]->execute();
	m_undoCommand = (*m_offCommands)[button];
}

void RemoteControl::undoButtonPress()
{
	m_undoCommand->undo();
}
