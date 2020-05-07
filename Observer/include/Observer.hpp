#ifndef OBSERVER_HPP
#define OBSERVER_HPP

//forward declaration
class Subject;

class Observer
{
    public:
        Observer();
        virtual ~Observer();

        virtual void update(Subject* subject) = 0;
};

#endif // OBSERVER_HPP
