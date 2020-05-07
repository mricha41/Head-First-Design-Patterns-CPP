#ifndef SHREDDEDPROVOLONE_HPP
#define SHREDDEDPROVOLONE_HPP

#include "Cheese.hpp"

class ShreddedProvolone : public Cheese
{
    public:
        ShreddedProvolone();
        virtual ~ShreddedProvolone();

        std::string toString() override { return "Shredded Provolone Cheese"; }
};

#endif // SHREDDEDPROVOLONE_HPP
