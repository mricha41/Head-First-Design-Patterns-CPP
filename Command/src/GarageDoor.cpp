#include "GarageDoor.hpp"

#include <iostream>

GarageDoor::GarageDoor()
{

}

GarageDoor::~GarageDoor()
{

}

void GarageDoor::open() 
{ 
	std::cout << "Garage door open." << std::endl; 
}

void GarageDoor::close() 
{ 
	std::cout << "Garage door close." << std::endl; 
}

