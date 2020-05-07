#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <string>
#include <vector>

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Veggies.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        virtual void prepare() = 0;
        std::string toString();

        void bake();
        void cut();
        void box();
        std::string getName() { return m_name; }
        void setName(std::string name) { m_name = name; }

    protected:
        std::string m_name;
        Dough* m_dough;
        Sauce* m_sauce;
        Cheese* m_cheese;
        std::vector<Veggies*>* m_veggies;
        Pepperoni* m_pepperoni;
        Clams* m_clams;
};

#endif // PIZZA_HPP
