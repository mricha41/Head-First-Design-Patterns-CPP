#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"

class Subject
{
    public:
        Subject();
        virtual ~Subject();

        virtual void registerObserver(Observer* o) = 0;
        virtual void removeObserver(Observer* o) = 0;
        virtual void notifyObservers() = 0;
};

#endif // SUBJECT_HPP
