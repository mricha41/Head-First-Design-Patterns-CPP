#ifndef CEILINGFAN_HPP
#define CEILINGFAN_HPP

#include <iostream>

namespace CeilingFanSpeeds
{
	enum {
		OFF = 0,
		LOW = 1,
		MEDIUM = 2,
		HIGH = 3
	};
}

class CeilingFan
{
public:
	CeilingFan();
	CeilingFan(std::string name, std::size_t speed);

	~CeilingFan();

	void high();
	void medium();
	void low();

	std::size_t getSpeed() { return m_speed; };

	void off();

private:
	std::size_t m_speed;
	std::string m_name;
};

#endif //CEILINGFAN_HPP


