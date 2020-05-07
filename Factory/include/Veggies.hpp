#ifndef VEGGIES_HPP
#define VEGGIES_HPP

#include <string>

class Veggies
{
    public:
        Veggies();
        virtual ~Veggies();

        virtual std::string toString() = 0;
};

#endif // VEGGIES_HPP
