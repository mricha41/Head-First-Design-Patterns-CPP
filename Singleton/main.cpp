#include <iostream>

#include "ChocolateBoiler.hpp"

int main()
{
    //just so you can check that it is truly one instance...
    //the compiler will actually catch this!
    //ChocolateBoiler* notGonnaWork = new ChocolateBoiler();

    //also not going to work...
    //copy constructor and operator =
    //are off-limits.
    //C++11 allows us to delete functions
    //so the compiler can catch these!
    //ChocolateBoiler notGonnaWork = ChocolateBoiler(ChocolateBoiler::getInstance());
    //ChocolateBoiler notGonnaWork = ChocolateBoiler::getInstance();

    //also make sure it cannot be deleted...
    //program will crash!
    //This is because ChocolateBoiler::getInstance()
    //only returns a reference!
    //Crash occurs because allocation is always
    //dynamic (run-time)...so compiler will not catch this.
    //delete &ChocolateBoiler::getInstance();

    //pointers are still on the table...which can be handy
    //ChocolateBoiler* notGonnaWork = &ChocolateBoiler::getInstance();
    //notGonnaWork->checkBoiler();
    //notGonnaWork->fill();
    //ChocolateBoiler::getInstance().checkBoiler();
    //ChocolateBoiler::getInstance().boil();
    //notGonnaWork->checkBoiler();
    //notGonnaWork->drain();
    //ChocolateBoiler::getInstance().checkBoiler();

    //just don't try to delete them...
    //program will crash!
    //Again...see above explanation for why
    //you cannot delete the static instance.
    //delete notGonnaWork;

    //run number one...
    std::cout<<
    "*********************************************************\n"
    "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
    "FIRST RUN!!\n"
    "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
    "*********************************************************"
    "\n\n"
    <<std::endl;
    ChocolateBoiler::getInstance().checkBoiler();
    //ChocolateBoiler::getInstance().boil();
    //ChocolateBoiler::getInstance().drain();
    ChocolateBoiler::getInstance().fill();
    //ChocolateBoiler::getInstance().fill();
    //ChocolateBoiler::getInstance().checkBoiler();
    ChocolateBoiler::getInstance().boil();
    //ChocolateBoiler::getInstance().checkBoiler();
    //ChocolateBoiler::getInstance().boil();
    ChocolateBoiler::getInstance().drain();
    //ChocolateBoiler::getInstance().boil();
    //ChocolateBoiler::getInstance().drain();

    //rinse and repeat...
    std::cout<<
    "\n\n"
    "*********************************************************\n"
    "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
    "SECOND RUN!!\n"
    "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
    "*********************************************************"
    "\n\n"
    <<std::endl;
    ChocolateBoiler::getInstance().checkBoiler();
    ChocolateBoiler::getInstance().fill();
    ChocolateBoiler::getInstance().boil();
    ChocolateBoiler::getInstance().drain();

    return 0;
}
