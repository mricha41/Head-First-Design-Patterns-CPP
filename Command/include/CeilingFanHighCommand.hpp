#ifndef CEILINGFANHIGHCOMMAND_HPP
#define CEILINGFANHIGHCOMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"

class CeilingFanHighCommand : public Command
{
public:
	CeilingFanHighCommand();
	CeilingFanHighCommand(CeilingFan* fan);

	~CeilingFanHighCommand();

	virtual void execute();
	virtual void undo();

private:
	CeilingFan* m_fan;
	std::size_t m_previousSpeed;
};

#endif //CEILINGFANHIGHCOMMAND_HPP