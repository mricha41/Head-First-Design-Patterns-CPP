#ifndef TEA_HPP
#define TEA_HPP

#include "CaffeineBeverage.hpp"

class Tea : public CaffeineBeverage
{
public:
	Tea();
	~Tea();

	virtual void brew();
	virtual void addCondiments();
};

#endif //TEA_HPP

