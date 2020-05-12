#include "DuckAdapter.hpp"

#include <iostream>
#include <random>

#include "Duck.hpp"

DuckAdapter::DuckAdapter()
:
	m_duck(nullptr)
{

}

DuckAdapter::DuckAdapter(Duck* duck)
:
	m_duck(duck)
{

}

DuckAdapter::~DuckAdapter()
{

}

void DuckAdapter::gobble()
{
	m_duck->quack();
}

void DuckAdapter::fly()
{
	std::random_device randomDevice;
	std::mt19937 engine(randomDevice());
	std::uniform_int_distribution<std::uint32_t> uniformDistribution(1, 5);
	for (int i = 0; i < uniformDistribution(engine); ++i)
	{
		m_duck->fly();
	}
}
