#include "DVDPlayer.hpp"

DVDPlayer::DVDPlayer()
:
	m_amp(nullptr),
	m_title("")
{
}

DVDPlayer::DVDPlayer(Amplifier* amp)
:
	m_amp(amp),
	m_title("")
{
}

DVDPlayer::~DVDPlayer()
{
}

void DVDPlayer::on()
{
	std::cout << "Top-O-Line DVD Player on" << "\n";
}

void DVDPlayer::off()
{
	std::cout << "Top-O-Line DVD Player off" << "\n";
}

void DVDPlayer::eject()
{
	std::cout << "Top-O-Line DVD Player eject" << "\n";
}

void DVDPlayer::pause()
{
	std::cout << "Top-O-Line DVD Player pause" << "\n";
}

void DVDPlayer::play(std::string movie)
{
	m_title = movie;
	std::cout << "Top-O-Line DVD Player playing \"" << movie << "\"\n";
}

void DVDPlayer::setSurroundAudio()
{
	std::cout << "Top-O-Line DVD Player setting surround audio" << "\n";
}

void DVDPlayer::setTwoChannelAudio()
{
	std::cout << "Top-O-Line DVD Player setting two channel audio" << "\n";
}

void DVDPlayer::stop()
{
	std::cout << "Top-O-Line DVD Player stopped \"" << m_title << "\"\n";
}
