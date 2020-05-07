#ifndef BLACKOLIVES_HPP
#define BLACKOLIVES_HPP

#include "Veggies.hpp"

class BlackOlives : public Veggies
{
    public:
        BlackOlives();
        virtual ~BlackOlives();

        std::string toString() override { return "Black Olives" ;}
};

#endif // BLACKOLIVES_HPP
