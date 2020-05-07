#ifndef EGGPLANT_HPP
#define EGGPLANT_HPP

#include "Veggies.hpp"

class Eggplant : public Veggies
{
    public:
        Eggplant();
        virtual ~Eggplant();

        std::string toString() override { return "Eggplant" ;}
};

#endif // EGGPLANT_HPP
