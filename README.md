# trpclib

Creates wrapper class for rpclib server/client to provide compile time checks on RPC stubs.

Given a .idl file, you can generate stubs using `gen FILE.idl`

This generates a folder gen with the following files:
- Client.hpp
- Client.cc
- ServerBase.hpp

The developer can use the client by including the client.

The developer can use the server by deriving from ServerBase, example in Server.hpp/cc.
