#include "CompositeIterator.hpp"

#include "Menu.hpp"

CompositeIterator::CompositeIterator(Iterator* itr)
{
    m_stack.push(itr);
}

CompositeIterator::~CompositeIterator()
{

}

MenuComponent* CompositeIterator::next()
{
    if (hasNext())
    {
        Iterator* itr = m_stack.top();
        MenuComponent* component = itr->next();
        if (dynamic_cast<Menu*>(component) != NULL)
        {
            m_stack.push(component->createIterator());
        }
        return component;
    }
    else
    {
        return nullptr;
    }
}

bool CompositeIterator::hasNext()
{
    if (m_stack.empty())
    {
        return false;
    }
    else
    {
        Iterator* itr = m_stack.top();
        if (!itr->hasNext())
        {
            m_stack.pop();
            return hasNext();
        }
        else
        {
            return true;
        }
    }
}

void CompositeIterator::remove()
{
    
}
