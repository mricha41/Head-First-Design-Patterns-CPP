#include "Projector.hpp"

#include "DVDPlayer.hpp"

Projector::Projector()
:
	m_dvd(nullptr)
{

}

Projector::Projector(DVDPlayer* dvd)
:
	m_dvd(dvd)
{

}

Projector::~Projector()
{

}

void Projector::on()
{
	std::cout << "Top-O-Line Projector on" << "\n";
}

void Projector::off()
{
	std::cout << "Top-O-Line Projector off" << "\n";
}

void Projector::TVMode()
{
	std::cout << "Top-O-Line Projector in TV mode" << "\n";
}

void Projector::wideScreenMode()
{
	std::cout << "Top-O-Line Projector in widescreen mode (16x9 aspect ratio)" << "\n";
}
