#ifndef CAFEMENUITERATOR_HPP
#define CAFEMENUITERATOR_HPP

#include <string>
#include <map>

#include "Iterator.hpp"
#include "MenuItem.hpp"

//NOTE:
//In C++, we don't inherit from STL iterators
//because they weren't designed with that in mind.
//inheriting from a base class iterator, it seems,
//would add unnecessary overhead and harm performance.
//hence, unlike the book, this class implements a 
//wrapped iterator to reveal an API similar to the 
//other Menu iterators in the Headfirst book.
class CafeMenuIterator : public Iterator
{
public:
	CafeMenuIterator() = delete;
	CafeMenuIterator(std::map<std::string, MenuItem>& items);
	~CafeMenuIterator();

	virtual bool hasNext();
	virtual MenuItem next();
	virtual void remove();

private:
	std::map<std::string, MenuItem> m_menuItems;
	std::size_t m_position;
	std::map<std::string, MenuItem>::iterator m_itr;
};

#endif //CAFEMENUITERATOR_HPP
