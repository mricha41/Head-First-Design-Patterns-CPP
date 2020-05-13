#ifndef DVDPLAYER_HPP
#define DVDPLAYER_HPP

#include <iostream>

class Amplifier;

class DVDPlayer
{
public:
	DVDPlayer();
	DVDPlayer(Amplifier* amp);

	~DVDPlayer();

	void on();
	void off();

	void eject();
	void pause();
	void play(std::string movie);
	void setSurroundAudio();
	void setTwoChannelAudio();
	void stop();

private:
	Amplifier* m_amp;
	std::string m_title;
};

#endif //DVDPLAYER_HPP

