#include "HotTubOnCommand.hpp"

#include "HotTub.hpp"

HotTubOnCommand::HotTubOnCommand()
:
	m_tub(nullptr)
{

}

HotTubOnCommand::HotTubOnCommand(HotTub* tub)
:
	m_tub(tub)
{

}


HotTubOnCommand::~HotTubOnCommand()
{

}

void HotTubOnCommand::execute()
{
	m_tub->on();
}

void HotTubOnCommand::undo()
{
	m_tub->off();
}
