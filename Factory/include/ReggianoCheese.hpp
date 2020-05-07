#ifndef REGGIANOCHEESE_HPP
#define REGGIANOCHEESE_HPP

#include "Cheese.hpp"

class ReggianoCheese : public Cheese
{
    public:
        ReggianoCheese();
        virtual ~ReggianoCheese();

        std::string toString() override { return "Reggiano Cheese"; }
};

#endif // REGGIANOCHEESE_HPP
