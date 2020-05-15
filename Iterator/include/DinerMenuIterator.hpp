#ifndef DINERMENUITERATOR_HPP
#define DINERMENUITERATOR_HPP

#include <array>

#include "Iterator.hpp"

template <std::size_t size>
class DinerMenuIterator : public Iterator
{
public:
	DinerMenuIterator() = delete;
	
	DinerMenuIterator(std::array<MenuItem, size> items);

	~DinerMenuIterator();

	virtual bool hasNext();
	virtual MenuItem next();
	virtual void remove();

private:
	std::array<MenuItem, size> m_menuItems;
	std::size_t m_size;
	std::size_t m_capacity;
	std::size_t m_position;
};

#include "DinerMenuIterator.inl"

#endif //DINERMENUITERATOR_HPP
