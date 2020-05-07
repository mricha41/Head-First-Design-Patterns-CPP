#ifndef CHEESE_HPP
#define CHEESE_HPP

#include <string>

class Cheese
{
    public:
        Cheese();
        virtual ~Cheese();

        virtual std::string toString() = 0;
};

#endif // CHEESE_HPP
