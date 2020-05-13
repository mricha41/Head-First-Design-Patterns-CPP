#include "Tuner.hpp"

#include "Amplifier.hpp"

Tuner::Tuner()
:
	m_amp(nullptr),
	m_frequency(0)
{

}

Tuner::Tuner(Amplifier* amp)
:
	m_amp(amp),
	m_frequency(0)
{

}

Tuner::~Tuner()
{

}

void Tuner::on()
{
	std::cout << "Top-O-Line Tuner on" << "\n";
}

void Tuner::off()
{
	std::cout << "Top-O-Line Tuner off" << "\n";
}

void Tuner::setAM(std::uint32_t station)
{
	m_frequency = static_cast<float>(station);
}

void Tuner::setFM(float station)
{
	m_frequency = station;
}

void Tuner::setFrequency(float freq)
{
	m_frequency = freq;
}
