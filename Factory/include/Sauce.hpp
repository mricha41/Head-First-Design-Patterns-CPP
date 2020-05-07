#ifndef SAUCE_HPP
#define SAUCE_HPP

#include <string>

class Sauce
{
    public:
        Sauce();
        virtual ~Sauce();

        virtual std::string toString() = 0;
};

#endif // SAUCE_HPP
