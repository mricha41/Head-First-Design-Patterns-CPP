#include "Stereo.hpp"

Stereo::Stereo()
:
	m_name(""),
	m_volume(0),
	m_mode(StereoMode::RADIO)
{
}

Stereo::Stereo(std::string name)
:
	m_name(name),
	m_volume(0),
	m_mode(StereoMode::RADIO)
{

}

Stereo::~Stereo()
{

}

void Stereo::setCD()
{ 
	m_mode = StereoMode::CD;
	std::cout << "Stereo mode set to CD." << std::endl; 
}

void Stereo::setDVD()
{ 
	m_mode = StereoMode::DVD;
	std::cout << "Stereo mode set to DVD." << std::endl; 
}

void Stereo::setRadio()
{ 
	m_mode = StereoMode::RADIO;
	std::cout << "Stereo mode set to Radio." << std::endl; 
}

void Stereo::setVolume(int volume)
{ 
	m_volume = volume;
	std::cout << "Stereo volume set to " << volume << "." << std::endl; 
}

void Stereo::on()
{
	switch (m_mode)
	{
	case StereoMode::RADIO:
	{
		if (m_name != "")
			std::cout << m_name << " Stereo on - using radio." << std::endl;
		else
			std::cout << "Stereo on - using radio." << std::endl;
	}
	break;
	case StereoMode::CD:
	{
		if (m_name != "")
			std::cout << m_name << " Stereo on - using CD." << std::endl;
		else
			std::cout << "Stereo on - using CD." << std::endl;
	}
	break;
	case StereoMode::DVD:
	{
		if (m_name != "")
			std::cout << m_name << " Stereo on - using DVD." << std::endl;
		else
			std::cout << "Stereo on - using DVD." << std::endl;
	}
	case StereoMode::AUX:
	{
		if (m_name != "")
			std::cout << m_name << " Stereo on - using AUX." << std::endl;
		else
			std::cout << "Stereo on - using AUX." << std::endl;
	}
	break;
	default:
		break;
	}	
}

void Stereo::off()
{
	if (m_name != "")
		std::cout << m_name << " Stereo off." << std::endl;
	else
		std::cout << "Stereo off." << std::endl;
}