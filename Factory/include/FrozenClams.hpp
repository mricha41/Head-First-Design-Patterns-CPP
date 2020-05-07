#ifndef FROZENCLAMS_HPP
#define FROZENCLAMS_HPP

#include "Clams.hpp"

class FrozenClams : public Clams
{
    public:
        FrozenClams();
        virtual ~FrozenClams();

        std::string toString() override { return "Frozen Clams"; }
};

#endif // FROZENCLAMS_HPP
