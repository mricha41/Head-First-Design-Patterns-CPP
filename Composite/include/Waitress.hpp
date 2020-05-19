#ifndef WAITRESS_HPP
#define WAITRESS_HPP

#include "MenuComponent.hpp"

class Waitress
{
public:
	Waitress() = delete;
	Waitress(MenuComponent* components);

	~Waitress();

	void printMenu();

private:
	MenuComponent* m_components;
};

#endif //WAITRESS_HPP
