#ifndef THINCRUSTDOUGH_HPP
#define THINCRUSTDOUGH_HPP

#include "Dough.hpp"

class ThinCrustDough : public Dough
{
    public:
        ThinCrustDough();
        virtual ~ThinCrustDough();

        std::string toString() override { return "Thin Crust Dough"; }
};

#endif // THINCRUSTDOUGH_HPP
