#include "StereoOnWithCDCommand.hpp"

#include "Stereo.hpp"

StereoOnWithCDCommand::StereoOnWithCDCommand()
:
	m_stereo(nullptr)
{

}

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* stereo)
:
	m_stereo(stereo)
{

}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{

}

void StereoOnWithCDCommand::execute()
{
	m_stereo->setCD();
	m_stereo->setVolume(11);
	m_stereo->on();
}

void StereoOnWithCDCommand::undo()
{
	m_stereo->off();
}
