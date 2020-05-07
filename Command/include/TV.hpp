#ifndef TV_HPP
#define TV_HPP

#include <iostream>

class TV
{
public:
	TV();
	TV(std::string name);

	~TV();

	void on();
	void off();
private:
	std::string m_name;
};

#endif //TV_HPP

