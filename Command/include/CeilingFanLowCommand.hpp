#ifndef CEILINGFANLOWCOMMAND_HPP
#define CEILINGFANLOWCOMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"

class CeilingFanLowCommand : public Command
{
public:
	CeilingFanLowCommand();
	CeilingFanLowCommand(CeilingFan* fan);

	~CeilingFanLowCommand();

	virtual void execute();
	virtual void undo();

private:
	CeilingFan* m_fan;
	std::size_t m_previousSpeed;
};

#endif //CEILINGFANLOWCOMMAND_HPP