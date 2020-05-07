#ifndef PINEAPPLE_HPP
#define PINEAPPLE_HPP

#include "Veggies.hpp"

class Pineapple : public Veggies
{
    public:
        Pineapple();
        virtual ~Pineapple();

        std::string toString() override { return "Pineapple" ;}
};

#endif // PINEAPPLE_HPP
