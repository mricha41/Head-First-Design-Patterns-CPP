#ifndef AMPLIFIER_HPP
#define AMPLIFIER_HPP

#include <iostream>

class Tuner;
class DVDPlayer;
class CDPlayer;

class Amplifier
{
public:
	Amplifier();
	Amplifier(Tuner* tuner, DVDPlayer* dvd, CDPlayer* cd);

	~Amplifier();

	void on();
	void off();
	void setCD();
	void setDVD();
	void setStereoSound();
	void setSurroundSound();
	void setTunerFM(float freq);
	void setTunerAM(std::uint32_t freq);
	void setVolume(std::uint32_t volume);
	std::uint32_t getVolume() { return m_volume; };

private:
	Tuner* m_tuner;
	DVDPlayer* m_dvd;
	CDPlayer* m_cd;
	std::uint32_t m_volume;
};

#endif //AMPLIFIER_HPP

