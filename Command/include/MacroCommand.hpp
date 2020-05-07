#ifndef MACROCOMMAND_HPP
#define MACROCOMMAND_HPP

#include <vector>

#include "Command.hpp"

class MacroCommand : public Command
{
public:
	MacroCommand();

	template <typename ...T>
	MacroCommand(T* ...commands);

	~MacroCommand();

	virtual void execute();

	virtual void undo();

private:
	std::vector<Command*>* m_commands;
};

#endif //MACROCOMMAND_HPP

template<typename ...T>
inline MacroCommand::MacroCommand(T* ...commands)
:
	m_commands{commands...}
{

}
