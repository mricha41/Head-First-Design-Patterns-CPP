#ifndef COFFEEWITHHOOKS_HPP
#define COFFEEWITHHOOKS_HPP

#include "CaffeineBeverage.hpp"

class CoffeeWithHooks : public CaffeineBeverage
{
public:
	CoffeeWithHooks();
	~CoffeeWithHooks();

	virtual void brew();
	virtual void addCondiments();

	virtual bool customerWantsCondiments();
};

#endif //COFFEEWITHHOOKS_HPP
