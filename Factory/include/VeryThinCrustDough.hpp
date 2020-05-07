#ifndef VERYTHINCRUST_HPP
#define VERYTHINCRUST_HPP

#include "Dough.hpp"

class VeryThinCrustDough : public Dough
{
    public:
        VeryThinCrustDough();
        virtual ~VeryThinCrustDough();

        std::string toString() override { return "Very Thin Crust Dough" ;}
};

#endif // VERYTHINCRUST_HPP
