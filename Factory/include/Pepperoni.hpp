#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include <string>

class Pepperoni
{
    public:
        Pepperoni();
        virtual ~Pepperoni();

        virtual std::string toString() = 0;
};

#endif // PEPPERONI_HPP
