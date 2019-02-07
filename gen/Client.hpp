#include <string>
#include <exception>

#include "rpc/server.h"

using namespace std;

class Client {
  public:
    Client(string address, int port) {
      c = rpc::client(address, port);
    }
    int add(int a, int b) {
      try {
        return c.call("add", a, b).as<int>();
      } catch (const exception& e) {
        throw e;
      }
    }
    int mult(int a, int b) {
      try {
        return c.call("mult", a, b).as<int>();
      } catch (const exception& e) {
        throw e;
      }
    }

  private:
    rpc::client c;
}