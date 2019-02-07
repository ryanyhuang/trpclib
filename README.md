# trpclib

Creates server and client wrapper classes for rpclib to provide compile time checks on RPC stubs. Based on Thrift.

Given a .idl file, you can generate stubs using `gen FILE.idl`

This generates a folder `gen`, with the following files:
- `gen/Client.hpp`
- `gen/ServerBase.hpp`

The developer can use the client by including `gen/Client.hpp`.

The developer can use the server by including `gen/ServerBase.hpp`, deriving your Server class from ServerBase, and implementing the required methods (example in `Server.hpp/cc`).

Example programs in `ServerMain.cc` and `ClientMain.cc`.
