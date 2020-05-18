#include "CafeMenuIterator.hpp"

#include <iostream>

CafeMenuIterator::CafeMenuIterator(std::map<std::string, MenuItem>& items)
:
	m_menuItems(items),
	m_position(0),
	m_itr(m_menuItems.begin())
{

}

CafeMenuIterator::~CafeMenuIterator()
{

}

bool CafeMenuIterator::hasNext()
{
	if (m_position >= m_menuItems.size())
	{
		//set it back one, that way erasure
		//takes place where the iterator was
		//otherwise you could reset it to the 
		//beginning - keeping in mind that it
		//remove() would remove the first element
		//instead of the current position of the iterator
		//like Headfirst seems to favor for whatever reason
		m_position = m_menuItems.size() - 1;
		m_itr--;
		return false;
	}
	else
	{
		return true;
	}
}

MenuItem CafeMenuIterator::next()
{
	MenuItem item;
	if (m_itr != m_menuItems.end())
	{
		item = m_itr->second;
		m_itr++;
		m_position++;
	}

	return item;
}

void CafeMenuIterator::remove()
{
	if (m_menuItems.size() > 0 && m_itr != m_menuItems.end())
	{
		std::map<std::string, MenuItem>::iterator it = m_menuItems.find(m_itr->first);
		m_menuItems.erase(it);
		m_itr = m_menuItems.begin();
		m_position = 0;
	}
	else
	{
		std::cout << "\nMenu items list must have at least one element\n\n";
	}
}
