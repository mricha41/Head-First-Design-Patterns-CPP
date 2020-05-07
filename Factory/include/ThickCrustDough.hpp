#ifndef THICKCRUSTDOUGH_HPP
#define THICKCRUSTDOUGH_HPP

#include "Dough.hpp"

class ThickCrustDough : public Dough
{
    public:
        ThickCrustDough();
        virtual ~ThickCrustDough();

        std::string toString() override { return "Thick Crust Dough"; }
};

#endif // THICKCRUSTDOUGH_HPP
