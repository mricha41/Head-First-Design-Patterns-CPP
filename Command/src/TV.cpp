#include "TV.hpp"

TV::TV()
:
	m_name("")
{

}

TV::TV(std::string name)
:
	m_name(name)
{

}

TV::~TV()
{

}

void TV::on()
{
	if (m_name != "")
		std::cout << m_name << " TV is on." << std::endl;
	else
		std::cout << "TV is on." << std::endl;
}

void TV::off()
{
	if (m_name != "")
		std::cout << m_name << " TV is off." << std::endl;
	else
		std::cout << "TV is off." << std::endl;
}
