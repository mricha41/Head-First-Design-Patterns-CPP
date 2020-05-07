#include "LightOffCommand.hpp"

#include "Light.hpp"

LightOffCommand::LightOffCommand()
	:
	m_light(nullptr)
{

}

LightOffCommand::LightOffCommand(Light* light)
	:
	m_light(light)
{

}


LightOffCommand::~LightOffCommand()
{

}

void LightOffCommand::execute()
{
	m_light->off();
}

void LightOffCommand::undo()
{
	m_light->on();
}
