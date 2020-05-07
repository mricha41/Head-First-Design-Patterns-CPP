#ifndef CEILINGFANMEDIUMCOMMAND_HPP
#define CEILINGFANMEDIUMCOMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"

class CeilingFanMediumCommand : public Command
{
public:
	CeilingFanMediumCommand();
	CeilingFanMediumCommand(CeilingFan* fan);

	~CeilingFanMediumCommand();

	virtual void execute();
	virtual void undo();

private:
	CeilingFan* m_fan;
	std::size_t m_previousSpeed;
};

#endif //CEILINGFANMEDIUMCOMMAND_HPP