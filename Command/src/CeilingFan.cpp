#include "CeilingFan.hpp"

CeilingFan::CeilingFan()
:
	m_speed(0),
	m_name("")
{

}

CeilingFan::CeilingFan(std::string name, std::size_t speed)
:
	m_speed(speed),
	m_name(name)
{

}

CeilingFan::~CeilingFan()
{

}

void CeilingFan::high()
{
	m_speed = CeilingFanSpeeds::HIGH;
	if(m_name != "")
		std::cout << m_name << " Fan speed currently on with speed set to HIGH." << std::endl;
	else
		std::cout << "Fan speed currently on with speed set to HIGH." << std::endl;
}

void CeilingFan::medium()
{
	m_speed = CeilingFanSpeeds::MEDIUM;
	if (m_name != "")
		std::cout << m_name << " Fan speed currently on with speed set to MEDIUM." << std::endl;
	else
		std::cout << "Fan speed currently on with speed set to MEDIUM." << std::endl;
}

void CeilingFan::low()
{
	m_speed = CeilingFanSpeeds::LOW;
	if (m_name != "")
		std::cout << m_name << " Fan speed currently on with speed set to LOW." << std::endl;
	else
		std::cout << "Fan speed currently on with speed set to LOW." << std::endl;
}

void CeilingFan::off()
{
	m_speed = CeilingFanSpeeds::OFF;
	if(m_name != "")
		std::cout << m_name << " Fan turned is off." << std::endl;
	else
		std::cout << "Fan is turned off." << std::endl;
}
