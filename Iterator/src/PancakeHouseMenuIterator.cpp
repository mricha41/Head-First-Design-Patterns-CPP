#include "PancakeHouseMenuIterator.hpp"

#include <iostream>
#include <algorithm>

PancakeHouseMenuIterator::PancakeHouseMenuIterator(std::vector<MenuItem>& items)
:
	m_menuItems(items),
	m_position(0)
{

}

PancakeHouseMenuIterator::~PancakeHouseMenuIterator()
{

}

bool PancakeHouseMenuIterator::hasNext()
{
	return m_position >= m_menuItems.size() ? false : true;
}

MenuItem PancakeHouseMenuIterator::next()
{
	MenuItem item = m_menuItems[m_position];
	m_position++;
	return item;
}

void PancakeHouseMenuIterator::remove()
{
	if (m_menuItems.size() > 0)
	{
		m_menuItems.pop_back();
		m_position = 0;
	}
	else
	{
		std::cout << "\nMenu items list must have at least one element\n\n";
	}
}
