#ifndef TURKEYADAPTER_HPP
#define TURKEYADAPTER_HPP

#include "Duck.hpp"

class Turkey;

class TurkeyAdapter : public Duck
{
public:
	TurkeyAdapter();
	TurkeyAdapter(Turkey* turkey);
	~TurkeyAdapter();

	virtual void quack();
	virtual void fly();
private:
	Turkey* m_turkey;
};

#endif //TURKEYADAPTER_HPP

