#ifndef STEREOONWITHCDCOMMAND_HPP
#define STEREOONWITHCDCOMMAND_HPP

#include "Command.hpp"

class Stereo;

class StereoOnWithCDCommand :
	public Command
{
public:
	StereoOnWithCDCommand();
	StereoOnWithCDCommand(Stereo* stereo);
	~StereoOnWithCDCommand();

	void setStereo(Stereo* stereo) { m_stereo = stereo; };

	virtual void execute();

	virtual void undo();

private:
	Stereo* m_stereo;
};

#endif //STEREOONWITHCDCOMMAND_HPP

