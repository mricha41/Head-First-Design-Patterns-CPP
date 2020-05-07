#include "ChocolateBoiler.hpp"

#include <iostream>

ChocolateBoiler::~ChocolateBoiler()
{

}

ChocolateBoiler& ChocolateBoiler::getInstance()
{
    static ChocolateBoiler boilerInstance;
    return boilerInstance;
}

void ChocolateBoiler::checkBoiler()
{
    std::cout<<
    "\n"
    "######################################################\n"
    "------------------------------------------------------\n"
    "Checking chocolate boiler status....\n";
    if(m_empty)
        std::cout<<"Boiler is empty.\n";
    else
        std::cout<<"Boiler is full.\n";
    if(m_boiled)
        std::cout<<"Chocolate mix has been boiled.\n";
    else
        std::cout<<"Chocolate mix has NOT been boiled.\n";
    std::cout<<
    "------------------------------------------------------\n"
    "######################################################"
    <<std::endl;
}

void ChocolateBoiler::fill()
{
    if(isEmpty())
    {
        m_empty = false;
        m_boiled = false;
        std::cout<<
        "\n"
        "######################################################\n"
        "------------------------------------------------------\n"
        "Filling the boiler with a milk/chocolate mixture...\n"
        "------------------------------------------------------\n"
        "######################################################"
        <<std::endl;
    }
    else
    {
        std::cout<<
        "\n"
        "######################################################\n"
        "------------------------------------------------------\n"
        "The boiler is already full.\n";
        if(m_boiled)
            std::cout<<"The chocolate mixture has been boiled.\n"
            "You need to drain the boiler.\n";
        else
            std::cout<<"The chocolate mixture has NOT been boiled.\n"
            "You need to boil the chocolate mixture.\n";
        std::cout<<
        "------------------------------------------------------\n"
        "######################################################"
        <<std::endl;
    }
}

void ChocolateBoiler::boil()
{
    if(!isEmpty() && !isBoiled())
    {
        std::cout<<
        "\n"
        "######################################################\n"
        "------------------------------------------------------\n"
        "Bringing the contents to a boil...\n"
        "------------------------------------------------------\n"
        "######################################################"
        <<std::endl;
        m_boiled = true;
    }
    else if(!isEmpty() && isBoiled())
    {
        std::cout<<
        "\n"
        "############################################################\n"
        "------------------------------------------------------------\n"
        "The contents of the boiler have already been boiled, now\n"
        "you need to drain it!\n"
        "------------------------------------------------------------\n"
        "############################################################"
        <<std::endl;
    }
    else if(isEmpty() && !isBoiled())
    {
        std::cout<<
        "\n"
        "######################################################\n"
        "------------------------------------------------------\n"
        "The boiler is still empty, you need to fill it first!\n"
        "------------------------------------------------------\n"
        "######################################################"
        <<std::endl;
    }
    else if(isEmpty() && isBoiled())
    {
        std::cout<<
        "\n"
        "######################################################################\n"
        "----------------------------------------------------------------------\n"
        "The contents of the boiler have already been boiled and the boiler\n"
        "is now empty! It is ready to be filled with chocolate mix again.\n"
        "----------------------------------------------------------------------\n"
        "######################################################################"
        <<std::endl;
    }
}

void ChocolateBoiler::drain()
{
    if(!isEmpty() && isBoiled())
    {
        std::cout<<
        "\n"
        "######################################################\n"
        "------------------------------------------------------\n"
        "Draining the boiled milk and chocolate...\n"
        "------------------------------------------------------\n"
        "######################################################"
        <<std::endl;
        m_empty = true;
    }
    else if(!isEmpty() && !isBoiled())
    {
        std::cout<<
        "\n"
        "######################################################\n"
        "------------------------------------------------------\n"
        "The milk and chocolate have NOT been boiled yet!\n"
        "------------------------------------------------------\n"
        "######################################################"
        <<std::endl;
    }
    else if(isEmpty() && !isBoiled())
    {
        std::cout<<
        "\n"
        "############################################################\n"
        "------------------------------------------------------------\n"
        "The boiler has NOT been filled. You need to fill it first!\n"
        "------------------------------------------------------------\n"
        "############################################################"
        <<std::endl;
    }
    else if(isEmpty() && isBoiled())
    {
        std::cout<<
        "\n"
        "######################################################################\n"
        "----------------------------------------------------------------------\n"
        "The contents of the boiler have already been boiled and the boiler\n"
        "is now empty! It is ready to be filled with chocolate mix again.\n"
        "----------------------------------------------------------------------\n"
        "######################################################################"
        <<std::endl;
    }
}
