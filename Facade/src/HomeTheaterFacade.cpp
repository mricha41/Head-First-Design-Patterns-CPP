#include "HomeTheaterFacade.hpp"

#include "Amplifier.hpp"
#include "Tuner.hpp"
#include "DVDPlayer.hpp"
#include "CDPlayer.hpp"
#include "Projector.hpp"
#include "TheaterLights.hpp"
#include "Screen.hpp"
#include "PopcornPopper.hpp"

HomeTheaterFacade::HomeTheaterFacade()
:
	m_amp(nullptr),
	m_tuner(nullptr),
	m_dvd(nullptr),
	m_cd(nullptr),
	m_projector(nullptr),
	m_theaterLights(nullptr),
	m_screen(nullptr),
	m_popper(nullptr)
{

}

HomeTheaterFacade::HomeTheaterFacade(Amplifier* amp, Tuner* tuner, DVDPlayer* dvd, CDPlayer* cd, Projector* projector, TheaterLights* lights, Screen* screen, PopcornPopper* popper)
:
	m_amp(amp),
	m_tuner(tuner),
	m_dvd(dvd),
	m_cd(cd),
	m_projector(projector),
	m_theaterLights(lights),
	m_screen(screen),
	m_popper(popper)
{

}

HomeTheaterFacade::~HomeTheaterFacade()
{

}

void HomeTheaterFacade::watchMovie(std::string title)
{
	std::cout << "Get ready to watch a movie..." << "\n";
	m_popper->on();
	m_popper->pop();
	m_theaterLights->on();
	m_theaterLights->dim();
	m_screen->down();
	m_projector->on();
	m_projector->wideScreenMode();
	m_amp->on();
	m_amp->setDVD();
	m_amp->setSurroundSound();
	m_amp->setVolume(5);
	m_dvd->on();
	m_dvd->play(title);
}

void HomeTheaterFacade::endMovie()
{
	std::cout << "Shutting movie theater down..." << "\n";
	m_popper->off();
	m_theaterLights->on();
	m_screen->up();
	m_projector->off();
	m_amp->off();
	m_dvd->stop();
	m_dvd->eject();
	m_dvd->off();
}

void HomeTheaterFacade::listenToCD()
{

}

void HomeTheaterFacade::endCD()
{

}

void HomeTheaterFacade::listenToRadio()
{

}

void HomeTheaterFacade::endRadio()
{

}
