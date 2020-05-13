#ifndef TEAWITHHOOKS_HPP
#define TEAWITHHOOKS_HPP

#include "CaffeineBeverage.hpp"

class TeaWithHooks : public CaffeineBeverage
{
public:
	TeaWithHooks();
	~TeaWithHooks();

	virtual void brew();
	virtual void addCondiments();

	virtual bool customerWantsCondiments();
};

#endif //TEAWITHHOOKS_HPP

