#ifndef COMMAND_HPP
#define COMMAND_HPP

class Command
{
public:
	Command();
	~Command();

	virtual void execute() = 0;
	virtual void undo() {};
};

#endif //COMMAND_HPP


