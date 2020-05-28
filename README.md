# Head-First-Design-Patterns-CPP
C++ ports of the "Head First Design Patterns" book examples. Examples use modern C++17 features, make sure the compiler flag is set.

## Notes on Remote and Virtual Proxy
The Remote Proxy pattern relies on rpclib for both server and client code:
http://rpclib.net
https://github.com/rpclib/rpclib

You must compile and link rpclib on your platform before the code works. In addition, you must leave the server running while you run the client against the server in order to see that the remote functions bound to the server work as expected. This of course requires two separate executables, which should be apparent when you look at the code.

The Virtual Proxy pattern is not implemented due to the fact that the book example requires an image library. Since C++ does not have standard library functionality for this and any library (SFML or SDL, for example) that performs those functions would be significantly complicated and obscure the point of the book - illustrating the use of design patterns in a simple manner for the purpose of learning them.
