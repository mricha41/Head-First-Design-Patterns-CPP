#ifndef DOUGH_HPP
#define DOUGH_HPP

#include <string>

class Dough
{
    public:
        Dough();
        virtual ~Dough();

        virtual std::string toString() = 0;
};

#endif // DOUGH_HPP
