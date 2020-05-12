#ifndef WILDTURKEY_HPP
#define WILDTURKEY_HPP

#include "Turkey.hpp"

class WildTurkey : public Turkey
{
public:
	WildTurkey();
	~WildTurkey();

	virtual void gobble();
	virtual void fly();
};

#endif //WILDTURKEY_HPP


