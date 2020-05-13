#ifndef COFFEE_HPP
#define COFFEE_HPP

#include "CaffeineBeverage.hpp"

class Coffee : public CaffeineBeverage
{
public:
	Coffee();
	~Coffee();

	virtual void brew();
	virtual void addCondiments();
};

#endif //COFFEE_HPP


