#ifndef SHREDDEDMOZARELLA_HPP
#define SHREDDEDMOZARELLA_HPP

#include "Cheese.hpp"

class ShreddedMozarella : public Cheese
{
    public:
        ShreddedMozarella();
        virtual ~ShreddedMozarella();

        std::string toString() override { return "Shredded Mozzarella Cheese"; }
};

#endif // SHREDDEDMOZARELLA_HPP
