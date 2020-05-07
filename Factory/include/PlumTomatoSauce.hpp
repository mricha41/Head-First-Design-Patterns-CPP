#ifndef PLUMTOMATOSAUCE_HPP
#define PLUMTOMATOSAUCE_HPP

#include "Sauce.hpp"

class PlumTomatoSauce : public Sauce
{
    public:
        PlumTomatoSauce();
        virtual ~PlumTomatoSauce();

        std::string toString() override { return "Plum Tomato Sauce"; }
};

#endif // PLUMTOMATOSAUCE_HPP
