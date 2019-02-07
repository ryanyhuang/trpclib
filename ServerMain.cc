#include "Server.hpp"

int main () {
  Server s("localhost", 8080);
  s.launch(); // Blocks
  return 0;
}