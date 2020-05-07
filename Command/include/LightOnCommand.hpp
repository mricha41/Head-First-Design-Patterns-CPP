#ifndef LIGHTONCOMMAND_HPP
#define LIGHTONCOMMAND_HPP

#include "Command.hpp"

class Light;

class LightOnCommand : public Command
{
public:
	LightOnCommand();
	LightOnCommand(Light* light);
	~LightOnCommand();

	void setLight(Light* light) { m_light = light; };

	virtual void execute();

	virtual void undo();

private:
	Light* m_light;
};

#endif //LIGHTONCOMMAND_HPP
