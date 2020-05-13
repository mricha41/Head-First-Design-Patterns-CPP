#ifndef CDPLAYER_HPP
#define CDPLAYER_HPP

#include <iostream>

class Amplifier;

class CDPlayer
{
public:
	CDPlayer();
	CDPlayer(Amplifier* amp);

	~CDPlayer();

	void on();
	void off();

	void eject();
	void pause();
	void play(std::string title);
	void stop();

private:
	Amplifier* m_amp;
	std::string m_title;
};

#endif //CDPLAYER_HPP

