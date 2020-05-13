#include <iostream>

#include "Amplifier.hpp"
#include "Tuner.hpp"
#include "DVDPlayer.hpp"
#include "CDPlayer.hpp"
#include "Projector.hpp"
#include "TheaterLights.hpp"
#include "Screen.hpp"
#include "PopcornPopper.hpp"
#include "HomeTheaterFacade.hpp"

int main()
{
	Amplifier amp;
	Tuner tuner(&amp);
	DVDPlayer dvd(&amp);
	CDPlayer cd(&amp);
	Projector projector(&dvd);
	TheaterLights lights;
	Screen screen;
	PopcornPopper popper;
	HomeTheaterFacade theater(&amp, &tuner, &dvd, &cd, &projector, &lights, &screen, &popper);

	theater.watchMovie("Raiders of the Lost Ark");
	theater.endMovie();

	return 0;
}