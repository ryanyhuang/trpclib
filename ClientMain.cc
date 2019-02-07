#include "gen/Client.hpp"

using namespace std;

int main(){
  Client rpcClient("localhost", 8080);
  int sum = rpcClient.add(3, 5);
  int product = rpcClient.mult(2, 4);

  cout << "sum: " << sum ", product: " << product << endl;

  return 0;
}
