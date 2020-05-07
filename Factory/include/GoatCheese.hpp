#ifndef GOATCHEESE_HPP
#define GOATCHEESE_HPP

#include "Cheese.hpp"

class GoatCheese : public Cheese
{
    public:
        GoatCheese();
        virtual ~GoatCheese();

        std::string toString() override { return "Goat Cheese" ;}
};

#endif // GOATCHEESE_HPP
