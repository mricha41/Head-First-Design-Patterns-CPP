#ifndef TUNER_HPP
#define TUNER_HPP

#include <iostream>

class Amplifier;

class Tuner
{
public:
	Tuner();
	Tuner(Amplifier* amp);

	~Tuner();

	void on();
	void off();

	void setAM(std::uint32_t station);
	void setFM(float station);
	void setFrequency(float freq);
	float getFrequency() { return m_frequency; };

private:
	Amplifier* m_amp;
	float m_frequency;
};

#endif //TUNER_HPP

