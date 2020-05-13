#ifndef HOMETHEATERFACADE_HPP
#define HOMETHEATERFACADE_HPP

#include <iostream>

class Amplifier;
class Tuner;
class DVDPlayer;
class CDPlayer;
class Projector;
class TheaterLights;
class Screen;
class PopcornPopper;

class HomeTheaterFacade
{
public:
	HomeTheaterFacade();
	HomeTheaterFacade(Amplifier* amp, Tuner* tuner, DVDPlayer* dvd, CDPlayer* cd, Projector* projector, 
		TheaterLights* lights, Screen* screen, PopcornPopper* popper);

	~HomeTheaterFacade();

	void watchMovie(std::string title);
	void endMovie();

	void listenToCD();
	void endCD();

	void listenToRadio();
	void endRadio();

private:
	Amplifier* m_amp;
	Tuner* m_tuner;
	DVDPlayer* m_dvd;
	CDPlayer* m_cd;
	Projector* m_projector;
	TheaterLights* m_theaterLights;
	Screen* m_screen;
	PopcornPopper* m_popper;
};

#endif //HOMETHEATERFACADE_HPP

