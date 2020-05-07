#ifndef STEREO_HPP
#define STEREO_HPP

#include <iostream>

enum class StereoMode
{
	RADIO = 0,
	CD = 1,
	DVD = 2,
	AUX = 3
};

class Stereo
{
public:
	Stereo();
	Stereo(std::string name);

	~Stereo();

	void setCD();
	void setDVD();
	void setRadio();
	void setVolume(int volume);

	void on();
	void off();

private:
	std::string m_name;
	int m_volume;
	StereoMode m_mode;
};

#endif //STEREO_HPP

