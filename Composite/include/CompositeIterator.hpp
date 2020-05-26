#ifndef COMPOSITEITERATOR_HPP
#define COMPOSITEITERATOR_HPP

#include <stack>

#include "Iterator.hpp"
#include "MenuComponent.hpp"

class CompositeIterator : public Iterator
{

public:
    CompositeIterator() = delete;
    CompositeIterator(Iterator* itr);
    virtual ~CompositeIterator();

    virtual MenuComponent* next() override final;
    virtual bool hasNext() override final;
    virtual void remove() override final;

private:
    std::stack<Iterator*> m_stack;
};

#endif //COMPOSITEITERATOR_HPP
