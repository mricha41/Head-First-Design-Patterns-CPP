#ifndef MARINARASAUCE_HPP
#define MARINARASAUCE_HPP

#include "Sauce.hpp"

class MarinaraSauce : public Sauce
{
    public:
        MarinaraSauce();
        virtual ~MarinaraSauce();

        std::string toString() override { return "Marinara Sauce"; }
};

#endif // MARINARASAUCE_HPP
