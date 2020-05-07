#ifndef STEREOOFFCOMMAND_HPP
#define STEREOOFFCOMMAND_HPP

#include "Command.hpp"

class Stereo;

class StereoOffCommand : public Command
{
public:
	StereoOffCommand();
	StereoOffCommand(Stereo* stereo);
	~StereoOffCommand();

	void setStereo(Stereo* stereo) { m_stereo = stereo; };

	virtual void execute();

	virtual void undo();

private:
	Stereo* m_stereo;
};

#endif //STEREOOFFCOMMAND_HPP