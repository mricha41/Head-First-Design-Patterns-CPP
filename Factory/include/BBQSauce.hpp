#ifndef BBQSAUCE_HPP
#define BBQSAUCE_HPP

#include "Sauce.hpp"

class BBQSauce : public Sauce
{
    public:
        BBQSauce();
        virtual ~BBQSauce();

        std::string toString() override { return "BBQ Sauce"; }
};

#endif // BBQSAUCE_HPP
