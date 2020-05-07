#ifndef MUSHROOM_HPP
#define MUSHROOM_HPP

#include "Veggies.hpp"

class Mushroom : public Veggies
{
    public:
        Mushroom();
        virtual ~Mushroom();

        std::string toString() override { return "Mushroom" ;}
};

#endif // MUSHROOM_HPP
