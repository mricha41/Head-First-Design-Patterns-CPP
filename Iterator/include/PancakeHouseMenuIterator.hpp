#ifndef PANCAKEHOUSEMENUITERATOR_HPP
#define PANCAKEHOUSEMENUITERATOR_HPP

#include <vector>

#include "Iterator.hpp"

class PancakeHouseMenuIterator : public Iterator
{
public:
	PancakeHouseMenuIterator() = delete;
	PancakeHouseMenuIterator(std::vector<MenuItem>& items);
	~PancakeHouseMenuIterator();

	virtual bool hasNext();
	virtual MenuItem next();
	virtual void remove();

private:
	std::vector<MenuItem> m_menuItems;
	std::size_t m_position;
};

#endif //PANCAKEHOUSEMENUITERATOR_HPP
