#ifndef ONION_HPP
#define ONION_HPP

#include "Veggies.hpp"

class Onion : public Veggies
{
    public:
        Onion();
        virtual ~Onion();

        std::string toString() override { return "Onion" ;}
};

#endif // ONION_HPP
