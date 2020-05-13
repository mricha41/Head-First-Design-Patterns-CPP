#include "TVOffCommand.hpp"

#include "TV.hpp"

TVOffCommand::TVOffCommand()
	:
	m_tv(nullptr)
{

}

TVOffCommand::TVOffCommand(TV* tv)
	:
	m_tv(tv)
{

}


TVOffCommand::~TVOffCommand()
{

}

void TVOffCommand::execute()
{
	m_tv->off();
}

void TVOffCommand::undo()
{
	m_tv->on();
}
