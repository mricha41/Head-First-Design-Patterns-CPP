#ifndef LIGHT_HPP
#define LIGHT_HPP

#include <iostream>

class Light
{
public:
	Light();
	Light(std::string name);
	~Light();

	void on();
	void off();

private:
	std::string m_name;
};


#endif //LIGHT_HPP
