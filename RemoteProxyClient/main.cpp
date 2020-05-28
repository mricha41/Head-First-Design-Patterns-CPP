#include <iostream>

#include "RemoteClient.hpp"

int main()
{
	RemoteClient client("127.0.0.1", 8080);

	client.call("foo");

	client.call("report");

	client.call("insertQuarter");

	client.call("turnCrank");

	return 0;
}