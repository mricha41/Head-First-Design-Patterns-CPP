#include "CDPlayer.hpp"

CDPlayer::CDPlayer()
:
	m_amp(nullptr),
	m_title("")
{

}

CDPlayer::CDPlayer(Amplifier* amp)
:
	m_amp(amp),
	m_title("")
{

}

CDPlayer::~CDPlayer()
{
}

void CDPlayer::on()
{
	std::cout << "Top-O-Line CD Player on" << "\n";
}

void CDPlayer::off()
{
	std::cout << "Top-O-Line CD Player off" << "\n";
}

void CDPlayer::eject()
{
	std::cout << "Top-O-Line CD Player eject" << "\n";
}

void CDPlayer::pause()
{
	std::cout << "Top-O-Line CD Player paused" << "\n";
}

void CDPlayer::play(std::string title)
{
	m_title = title;
	std::cout << "Top-O-Line CD Player playing \"" << m_title << "\"\n";
}

void CDPlayer::stop()
{
	std::cout << "Top-O-Line CD Player stopped \"" << m_title << "\"\n";
}
