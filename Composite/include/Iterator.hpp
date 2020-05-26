#ifndef ITERATOR_HPP
#define ITERATOR_HPP

class MenuComponent;

class Iterator
{
public:
    Iterator() {};
    virtual ~Iterator() {};

    virtual bool hasNext() = 0;
    virtual MenuComponent* next() = 0;
    virtual void remove() = 0;
};

#endif //ITERATOR_HPP

