#ifndef REDPEPPER_HPP
#define REDPEPPER_HPP

#include "Veggies.hpp"

class RedPepper : public Veggies
{
    public:
        RedPepper();
        virtual ~RedPepper();

        std::string toString() override { return "Red Pepper" ;}
};

#endif // REDPEPPER_HPP
