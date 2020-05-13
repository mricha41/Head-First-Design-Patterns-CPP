#include "TheaterLights.hpp"

#include <iostream>

TheaterLights::TheaterLights()
{
}

TheaterLights::~TheaterLights()
{
}

void TheaterLights::on()
{
	std::cout << "Theater Ceiling Lights on" << "\n";
}

void TheaterLights::off()
{
	std::cout << "Theater Ceiling Lights off" << "\n";
}

void TheaterLights::dim()
{
	std::cout << "Theater Lights dimming to 10%" << "\n";
}
