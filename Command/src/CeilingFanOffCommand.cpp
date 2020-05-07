#include "CeilingFanOffCommand.hpp"

CeilingFanOffCommand::CeilingFanOffCommand()
:
	m_fan(nullptr),
	m_previousSpeed(0)
{

}

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* fan)
:
	m_fan(fan),
	m_previousSpeed(fan->getSpeed())
{

}

CeilingFanOffCommand::~CeilingFanOffCommand()
{

}

void CeilingFanOffCommand::execute()
{
	m_previousSpeed = m_fan->getSpeed();
	m_fan->off();
}

void CeilingFanOffCommand::undo()
{
	switch (m_previousSpeed)
	{
	case CeilingFanSpeeds::OFF:
	{
		m_fan->off();
	}
	break;
	case CeilingFanSpeeds::LOW:
	{
		m_fan->low();
	}
	break;
	case CeilingFanSpeeds::MEDIUM:
	{
		m_fan->medium();
	}
	break;
	case CeilingFanSpeeds::HIGH:
	{
		m_fan->high();
	}
	break;
	default:
		break;
	}
}
