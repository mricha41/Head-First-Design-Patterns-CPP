#ifndef HOTTUBONCOMMAND_HPP
#define HOTTUBONCOMMAND_HPP

#include "Command.hpp"

class HotTub;

class HotTubOnCommand : public Command
{
public:
	HotTubOnCommand();
	HotTubOnCommand(HotTub* tub);

	~HotTubOnCommand();

	virtual void execute();

	virtual void undo();

private:
	HotTub* m_tub;
};

#endif //HOTTUBONCOMMAND_HPP

