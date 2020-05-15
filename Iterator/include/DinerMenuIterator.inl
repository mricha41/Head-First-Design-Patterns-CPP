#include <iostream>
#include <algorithm>

template <std::size_t size>
DinerMenuIterator<size>::DinerMenuIterator(std::array<MenuItem, size> items)
	:
	m_menuItems(items),
	m_capacity(size),
	m_position(0)
{
	std::size_t i = 0;
	while (!m_menuItems[i].getName().empty()) { ++i; };
	m_size = i;
	
}

template <std::size_t size>
DinerMenuIterator<size>::~DinerMenuIterator()
{

}

template <std::size_t size>
bool DinerMenuIterator<size>::hasNext()
{
	return (m_position >= m_size) ? false : true;
}

template <std::size_t size>
MenuItem DinerMenuIterator<size>::next()
{
	MenuItem item = m_menuItems[m_position];
	m_position++;
	return item;
}

template <std::size_t size>
void DinerMenuIterator<size>::remove()
{
	if (m_size > 0)
	{
		std::remove(m_menuItems.begin(), m_menuItems.end(), m_menuItems.back());
		m_size--;
		m_position = 0;
	}
	else
	{
		std::cout << "\nMenu items list must have at least one element" << "\n";
	}
}
