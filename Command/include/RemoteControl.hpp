#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include <vector>

#include "Command.hpp"

class RemoteControl
{
public:
	RemoteControl();

	template <typename ...T>
	RemoteControl(T*... onCommands, T*... offCommands);

	~RemoteControl();

	void setCommand(std::size_t button, Command* onCommand, Command* offCommand);

	void onButtonPressed(std::size_t button);
	void offButtonPressed(std::size_t button);

	void undoButtonPress();

private:
	//all pointers are non-owning pointers
	//do not delete
	std::vector<Command*>* m_onCommands;
	std::vector<Command*>* m_offCommands;
	Command* m_undoCommand;
};

template<typename ...T>
inline RemoteControl::RemoteControl(T* ...onCommands, T* ...offCommands)
	:
	m_undoCommand(nullptr),
	m_onCommands{ onCommands... },
	m_offCommands{ offCommands... }
{

}

#endif //REMOTE_CONTROL