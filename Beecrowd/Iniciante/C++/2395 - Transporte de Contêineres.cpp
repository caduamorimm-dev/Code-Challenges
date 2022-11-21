#include <iostream>
using namespace std;

int main() {
  long int A, B, C, X, Y, Z, qtd;


  cin >> A >> B >> C >> X >> Y >> Z;

  qtd = (((X/A)*(Y/B)*(Z/C)));

  cout << qtd << endl;

  return 0;
}
