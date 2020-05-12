#ifndef MALLARDDUCK_HPP
#define MALLARDDUCK_HPP

#include "Duck.hpp"

class MallardDuck : public Duck
{
public:
	MallardDuck();
	~MallardDuck();

	virtual void quack();
	virtual void fly();
};

#endif //MALLARDDUCK_HPP