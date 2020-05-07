#ifndef LIGHTOFFCOMMAND_HPP
#define LIGHTOFFCOMMAND_HPP

#include "Command.hpp"

class Light;

class LightOffCommand : public Command
{
public:
	LightOffCommand();
	LightOffCommand(Light* light);
	~LightOffCommand();

	void setLight(Light* light) { m_light = light; };

	virtual void execute();

	virtual void undo();

private:
	Light* m_light;
};

#endif //LIGHTCOMMAND_HPP




