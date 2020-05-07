#ifndef HOUSEBLEND_HPP
#define HOUSEBLEND_HPP

#include "Beverage.hpp"

class HouseBlend : public Beverage
{
    public:
        HouseBlend();
        virtual ~HouseBlend();

        double cost() override { return .89; }
};

#endif // HOUSEBLEND_HPP
