#include "Server.hpp"

int main () {
  Server s(8080);
  s.launch(); // Blocks
  return 0;
}
