#include "MacroCommand.hpp"

MacroCommand::MacroCommand()
:
	m_commands(nullptr)
{

}

MacroCommand::~MacroCommand()
{

}

void MacroCommand::execute()
{
	if (m_commands != nullptr)
	{
		for (const auto& command : *m_commands)
		{
			command->execute();
		}
	}
}

void MacroCommand::undo()
{
	if (m_commands != nullptr)
	{
		for (const auto& command : *m_commands)
		{
			command->undo();
		}
	}
}
