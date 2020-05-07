#ifndef GARLIC_HPP
#define GARLIC_HPP

#include "Veggies.hpp"

class Garlic : public Veggies
{
    public:
        Garlic();
        virtual ~Garlic();

        std::string toString() override { return "Garlic" ;}
};

#endif // GARLIC_HPP
