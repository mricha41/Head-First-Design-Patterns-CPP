#include "HotTubOffCommand.hpp"

#include "HotTub.hpp"

HotTubOffCommand::HotTubOffCommand()
	:
	m_tub(nullptr)
{

}

HotTubOffCommand::HotTubOffCommand(HotTub* tub)
	:
	m_tub(tub)
{

}


HotTubOffCommand::~HotTubOffCommand()
{

}

void HotTubOffCommand::execute()
{
	m_tub->off();
}

void HotTubOffCommand::undo()
{
	m_tub->on();
}
