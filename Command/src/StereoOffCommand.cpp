#include "StereoOffCommand.hpp"

#include "Stereo.hpp"

StereoOffCommand::StereoOffCommand()
	:
	m_stereo(nullptr)
{

}

StereoOffCommand::StereoOffCommand(Stereo* stereo)
	:
	m_stereo(stereo)
{

}


StereoOffCommand::~StereoOffCommand()
{

}

void StereoOffCommand::execute()
{
	m_stereo->off();
}

void StereoOffCommand::undo()
{
	m_stereo->on();
}
