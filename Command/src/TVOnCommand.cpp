#include "TVOnCommand.hpp"

#include "TV.hpp"

TVOnCommand::TVOnCommand()
	:
	m_tv(nullptr)
{

}

TVOnCommand::TVOnCommand(TV* tv)
:
	m_tv(tv)
{

}


TVOnCommand::~TVOnCommand()
{

}

void TVOnCommand::execute()
{
	m_tv->on();
}

void TVOnCommand::undo()
{
	m_tv->off();
}
