#include "Amplifier.hpp"

#include "Tuner.hpp"
#include "DVDPlayer.hpp"
#include "CDPlayer.hpp"

Amplifier::Amplifier()
:
	m_tuner(nullptr),
	m_dvd(nullptr),
	m_cd(nullptr),
	m_volume(0)
{
}

Amplifier::Amplifier(Tuner* tuner, DVDPlayer* dvd, CDPlayer* cd)
:
	m_tuner(tuner),
	m_dvd(dvd),
	m_cd(cd),
	m_volume(0)
{
}

Amplifier::~Amplifier()
{
}

void Amplifier::on()
{
	std::cout << "Top-O-Line Amplifier on" << "\n";
}

void Amplifier::off()
{
	std::cout << "Top-O-Line Amplifier off" << "\n";
}

void Amplifier::setCD()
{
	std::cout << "Top-O-Line Amplifier setting CD player to Top-O-Line CD Player" << "\n";
}

void Amplifier::setDVD()
{
	std::cout << "Top-O-Line Amplifier setting DVD player to Top-O-Line DVD Player" << "\n";
}

void Amplifier::setStereoSound()
{
	std::cout << "Top-O-Line Amplifier setting stereo sound on" << "\n";
}

void Amplifier::setSurroundSound()
{
	std::cout << "Top-O-Line Amplifier surround sound on (5 speakers, 1 subwoofer)" << "\n";
}

void Amplifier::setTunerFM(float freq)
{
	m_tuner->setFM(freq);
	std::cout << "Top-O-Line Amplifier setting FM tuner to station " << freq << "\n";
}

void Amplifier::setTunerAM(std::uint32_t freq)
{
	m_tuner->setAM(freq);
	std::cout << "Top-O-Line Amplifier setting AM tuner to station " << freq << "\n";
}

void Amplifier::setVolume(std::uint32_t volume)
{
	m_volume = volume;
	std::cout << "Top-O-Line Amplifier setting volume to " << m_volume << "\n";
}
