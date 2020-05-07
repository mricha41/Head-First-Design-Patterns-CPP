#include "Light.hpp"

Light::Light()
:
	m_name("")
{

}

Light::Light(std::string name)
:
	m_name(name)
{

}

Light::~Light()
{

}

void Light::on() 
{ 
	if(m_name != "")
		std::cout << m_name << " Light on." << std::endl;
	else
		std::cout << "Light on." << std::endl;
}

void Light::off() 
{ 
	if(m_name != "")
		std::cout << m_name << " Light off." << std::endl;
	else
		std::cout << "Light off." << std::endl;
}
