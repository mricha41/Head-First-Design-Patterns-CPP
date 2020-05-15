#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "MenuItem.hpp"

class Iterator
{
public:
	Iterator();
	~Iterator();

	virtual bool hasNext();
	virtual MenuItem next();
	virtual void remove();
};

#endif //ITERATOR_HPP

