#ifndef BRUSCHETTASAUCE_HPP
#define BRUSCHETTASAUCE_HPP

#include "Sauce.hpp"

class BruschettaSauce : public Sauce
{
    public:
        BruschettaSauce();
        virtual ~BruschettaSauce();

        std::string toString() override { return "Bruschetta Sauce" ;}
};

#endif // BRUSCHETTASAUCE_HPP
