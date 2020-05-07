#ifndef FRESHCLAMS_HPP
#define FRESHCLAMS_HPP

#include "Clams.hpp"

class FreshClams : public Clams
{
    public:
        FreshClams();
        virtual ~FreshClams();

        std::string toString() override { return "Fresh Clams"; }
};

#endif // FRESHCLAMS_HPP
