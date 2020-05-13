#ifndef PROJECTOR_HPP
#define PROJECTOR_HPP

class DVDPlayer;

class Projector
{
public:
	Projector();
	Projector(DVDPlayer* dvd);

	~Projector();

	void on();
	void off();
	void TVMode();
	void wideScreenMode();

private:
	DVDPlayer* m_dvd;
};

#endif //PROJECTOR_HPP

