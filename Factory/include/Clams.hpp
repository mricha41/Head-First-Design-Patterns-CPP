#ifndef CLAMS_HPP
#define CLAMS_HPP

#include <string>

class Clams
{
    public:
        Clams();
        virtual ~Clams();

        virtual std::string toString() = 0;
};

#endif // CLAMS_HPP
