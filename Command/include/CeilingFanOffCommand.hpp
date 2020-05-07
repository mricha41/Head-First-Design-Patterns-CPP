#ifndef CEILINGFANOFFCOMMAND_HPP
#define CEILINGFANOFFCOMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"

class CeilingFanOffCommand : public Command
{
public:
	CeilingFanOffCommand();
	CeilingFanOffCommand(CeilingFan* fan);

	~CeilingFanOffCommand();

	virtual void execute();
	virtual void undo();

private:
	CeilingFan* m_fan;
	std::size_t m_previousSpeed;
};

#endif //CEILINGFANOFFCOMMAND_HPP