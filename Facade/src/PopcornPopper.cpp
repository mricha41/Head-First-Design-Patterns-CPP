#include "PopcornPopper.hpp"

#include <iostream>

PopcornPopper::PopcornPopper()
{
}

PopcornPopper::~PopcornPopper()
{
}

void PopcornPopper::on()
{
	std::cout << "Popcorn Popper on" << "\n";
}

void PopcornPopper::off()
{
	std::cout << "Popcorn Popper off" << "\n";
}

void PopcornPopper::pop()
{
	std::cout << "Popcorn Popper popping popcorn!" << "\n";
}
