#include "TurkeyAdapter.hpp"

#include <iostream>

#include "Turkey.hpp"

TurkeyAdapter::TurkeyAdapter()
:
	m_turkey(nullptr)
{
}

TurkeyAdapter::TurkeyAdapter(Turkey* turkey)
:
	m_turkey(turkey)
{
	
}

TurkeyAdapter::~TurkeyAdapter()
{

}

void TurkeyAdapter::quack()
{
	m_turkey->gobble();
}

void TurkeyAdapter::fly()
{
	for(std::size_t i = 0; i < 5; ++i)
		m_turkey->fly();
}
