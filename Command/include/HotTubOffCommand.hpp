#ifndef HOTTUBOFFCOMMAND_HPP
#define HOTTUBOFFCOMMAND_HPP

#include "Command.hpp"

class HotTub;

class HotTubOffCommand : public Command
{
public:
	HotTubOffCommand();
	HotTubOffCommand(HotTub* tub);

	~HotTubOffCommand();

	virtual void execute();

	virtual void undo();

private:
	HotTub* m_tub;
};

#endif //HOTTUBOFFCOMMAND_HPP

