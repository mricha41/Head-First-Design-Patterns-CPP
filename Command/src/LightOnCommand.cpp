#include "LightOnCommand.hpp"

#include "Light.hpp"

LightOnCommand::LightOnCommand()
:
	m_light(nullptr)
{

}

LightOnCommand::LightOnCommand(Light* light)
:
	m_light(light)
{

}


LightOnCommand::~LightOnCommand()
{
	
}

void LightOnCommand::execute()
{
	m_light->on();
}

void LightOnCommand::undo()
{
	m_light->off();
}
