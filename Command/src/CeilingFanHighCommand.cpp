#include "CeilingFanHighCommand.hpp"

CeilingFanHighCommand::CeilingFanHighCommand()
:
	m_fan(nullptr),
	m_previousSpeed(0)
{

}

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* fan)
:
	m_fan(fan),
	m_previousSpeed(fan->getSpeed())
{

}

CeilingFanHighCommand::~CeilingFanHighCommand()
{

}

void CeilingFanHighCommand::execute()
{
	m_previousSpeed = m_fan->getSpeed();
	m_fan->high();
}

void CeilingFanHighCommand::undo()
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
