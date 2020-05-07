#ifndef SPINACH_HPP
#define SPINACH_HPP

#include "Veggies.hpp"

class Spinach : public Veggies
{
    public:
        Spinach();
        virtual ~Spinach();

        std::string toString() override { return "Spinach" ;}
};

#endif // SPINACH_HPP
