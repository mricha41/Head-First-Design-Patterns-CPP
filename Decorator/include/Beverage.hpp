#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <string>

class Beverage
{
    public:
        Beverage();
        virtual ~Beverage();

        virtual std::string getDescription() { return m_description; }

        virtual double cost() = 0;

    protected:
        std::string m_description;
};

#endif // BEVERAGE_HPP
