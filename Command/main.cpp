#include "RemoteControl.hpp"
#include "NoCommand.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "GarageDoorCloseCommand.hpp"
#include "Stereo.hpp"
#include "StereoOnWithCDCommand.hpp"
#include "StereoOffCommand.hpp"
#include "CeilingFan.hpp"
#include "CeilingFanOffCommand.hpp"
#include "CeilingFanLowCommand.hpp"
#include "CeilingFanMediumCommand.hpp"
#include "CeilingFanHighCommand.hpp"
#include "HotTub.hpp"
#include "HotTubOnCommand.hpp"
#include "HotTubOffCommand.hpp"
#include "TV.hpp"
#include "TVOnCommand.hpp"
#include "TVOffCommand.hpp"
#include "MacroCommand.hpp"

namespace Buttons
{
	enum
	{
		LIVING_ROOM_LIGHT = 0,
		KITCHEN_LIGHT = 1,
		GARAGE_DOOR = 2,
		LIVING_ROOM_STEREO = 3,
		LIVING_ROOM_CEILING_FAN_LOW = 4,
		LIVING_ROOM_CEILING_FAN_MEDIUM = 5,
		LIVING_ROOM_CEILING_FAN_HIGH = 6,
		HOT_TUB = 7,
		LIVING_ROOM_TV = 8,
		PARTY = 9
	};
}

int main()
{
	Light livingRoomLight("Living Room");
	Light kitchenLight("Kitchen");
	GarageDoor door;
	Stereo stereo("Living Room");
	CeilingFan fan("Living Room", CeilingFanSpeeds::OFF);
	HotTub tub;
	TV tv("Living Room");

	std::vector<Command*> partyOn = { new LightOnCommand(&livingRoomLight), new StereoOnWithCDCommand(&stereo), new TVOnCommand(&tv), new HotTubOnCommand(&tub) };
	std::vector<Command*> partyOff = { new LightOffCommand(&livingRoomLight), new StereoOffCommand(&stereo), new TVOffCommand(&tv), new HotTubOffCommand(&tub) };

	std::vector<Command*> onCommands = {
		new LightOnCommand(&livingRoomLight),
		new LightOnCommand(&kitchenLight),
		new GarageDoorOpenCommand(&door),
		new StereoOnWithCDCommand(&stereo),
		new CeilingFanLowCommand(&fan),
		new CeilingFanMediumCommand(&fan),
		new CeilingFanHighCommand(&fan),
		new HotTubOnCommand(&tub),
		new TVOnCommand(&tv),
		new MacroCommand(&partyOn),
		new NoCommand(),
		new NoCommand()
	};

	std::vector<Command*> offCommands = {
		new LightOffCommand(&livingRoomLight),
		new LightOffCommand(&kitchenLight),
		new GarageDoorCloseCommand(&door),
		new StereoOffCommand(&stereo),
		new CeilingFanOffCommand(&fan),
		new CeilingFanOffCommand(&fan),
		new CeilingFanOffCommand(&fan),
		new HotTubOffCommand(&tub),
		new TVOffCommand(&tv),
		new MacroCommand(&partyOff),
		new NoCommand(),
		new NoCommand()
	};
	
	RemoteControl remote = RemoteControl(&onCommands, &offCommands);

	remote.onButtonPressed(Buttons::LIVING_ROOM_LIGHT);

	remote.undoButtonPress();

	remote.onButtonPressed(Buttons::KITCHEN_LIGHT);

	remote.offButtonPressed(Buttons::KITCHEN_LIGHT);

	remote.onButtonPressed(Buttons::GARAGE_DOOR);

	remote.offButtonPressed(Buttons::GARAGE_DOOR);

	remote.onButtonPressed(Buttons::LIVING_ROOM_STEREO);

	remote.offButtonPressed(Buttons::LIVING_ROOM_STEREO);

	remote.onButtonPressed(Buttons::LIVING_ROOM_CEILING_FAN_LOW);
	remote.onButtonPressed(Buttons::LIVING_ROOM_CEILING_FAN_MEDIUM);
	remote.onButtonPressed(Buttons::LIVING_ROOM_CEILING_FAN_HIGH);

	remote.offButtonPressed(Buttons::LIVING_ROOM_CEILING_FAN_LOW);
	remote.offButtonPressed(Buttons::LIVING_ROOM_CEILING_FAN_MEDIUM);
	remote.offButtonPressed(Buttons::LIVING_ROOM_CEILING_FAN_HIGH);

	remote.onButtonPressed(Buttons::HOT_TUB);

	remote.offButtonPressed(Buttons::HOT_TUB);

	remote.onButtonPressed(Buttons::LIVING_ROOM_TV);

	remote.offButtonPressed(Buttons::LIVING_ROOM_TV);

	remote.onButtonPressed(Buttons::PARTY);

	remote.undoButtonPress();

	//delete party mode data first...
	for (auto& command : partyOn)
	{
		delete command;
		command = nullptr;
	}

	for (auto& command : partyOff)
	{
		delete command;
		command = nullptr;
	}

	///...then delete normal, un-nested, commands.
	for (auto& command : onCommands)
	{
		delete command;
		command = nullptr;
	}

	for (auto& command : offCommands)
	{
		delete command;
		command = nullptr;
	}

	return 0;
}