#include "CaliforniaPizzaIngredientFactory.hpp"

#include "VeryThinCrustDough.hpp"
#include "BBQSauce.hpp"
#include "BruschettaSauce.hpp"
#include "ShreddedProvolone.hpp"
#include "GoatCheese.hpp"
#include "SlicedPepperoni.hpp"
#include "Calamari.hpp"
#include "Pineapple.hpp"
#include "Spinach.hpp"
#include "RedPepper.hpp"
#include "BlackOlives.hpp"

CaliforniaPizzaIngredientFactory::CaliforniaPizzaIngredientFactory(std::string type)
{
    m_pizzaType = type;
}

CaliforniaPizzaIngredientFactory::~CaliforniaPizzaIngredientFactory()
{

}

Dough* CaliforniaPizzaIngredientFactory::createDough()
{
    return new VeryThinCrustDough();
}

Sauce* CaliforniaPizzaIngredientFactory::createSauce()
{
    if(m_pizzaType == "cheese" || m_pizzaType == "pepperoni" || m_pizzaType == "clam")
        return new BruschettaSauce();
    else
        return new BBQSauce();
}

Cheese* CaliforniaPizzaIngredientFactory::createCheese()
{
    if(m_pizzaType == "clam")
        return new GoatCheese();
    else
        return new ShreddedProvolone();
}

std::vector<Veggies*>* CaliforniaPizzaIngredientFactory::createVeggies()
{
    auto veggies = new std::vector<Veggies*>;
    veggies->push_back(new Pineapple());
    veggies->push_back(new RedPepper());
    veggies->push_back(new BlackOlives());
    veggies->push_back(new Spinach());

    return veggies;
}

Pepperoni* CaliforniaPizzaIngredientFactory::createPepperoni()
{
    return new SlicedPepperoni;
}

Clams* CaliforniaPizzaIngredientFactory::createClams()
{
    return new Calamari;
}
