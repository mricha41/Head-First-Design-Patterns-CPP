#ifndef DUCKADAPTER_HPP
#define DUCKADAPTER_HPP

#include "Turkey.hpp"

class Duck;

class DuckAdapter : public Turkey
{
public:
	DuckAdapter();
	DuckAdapter(Duck* duck);
	~DuckAdapter();

	virtual void gobble();
	virtual void fly();

private:
	Duck* m_duck;
};

#endif //DUCKADAPTER_HPP