#include <string>

#include "rpc/server.h"

class ServerBase {
  public:
    ServerBase(int port) {
      srv = rpc::server(port);
    }
    virtual int add(int a, int b);
    virtual int mult(int a, int b);

    void launch() {
      srv.bind("add", [](int a, int b) {
        try {
          return add(a, b);
        } catch (const exception& e){
          rpc::this_handler().respond_error(e.what());
        }
      });

      srv.bind("mult", [](int a, int b) {
        try {
          return mult(a, b);
        } catch (const exception& e){
          rpc::this_handler().respond_error(e.what());
        }
      });

      srv.run();
    }

  private:
    rpc::server srv;
}