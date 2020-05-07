#ifndef SLICEDPEPPERONI_HPP
#define SLICEDPEPPERONI_HPP

#include "Pepperoni.hpp"

class SlicedPepperoni : public Pepperoni
{
    public:
        SlicedPepperoni();
        virtual ~SlicedPepperoni();

        std::string toString() override { return "Sliced Pepperoni"; }
};

#endif // SLICEDPEPPERONI_HPP
