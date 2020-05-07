#include "CeilingFanMediumCommand.hpp"

CeilingFanMediumCommand::CeilingFanMediumCommand()
:
	m_fan(nullptr),
	m_previousSpeed(0)
{

}

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan* fan)
:
	m_fan(fan),
	m_previousSpeed(fan->getSpeed())
{

}

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{

}

void CeilingFanMediumCommand::execute()
{
	m_previousSpeed = m_fan->getSpeed();
	m_fan->medium();
}

void CeilingFanMediumCommand::undo()
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
