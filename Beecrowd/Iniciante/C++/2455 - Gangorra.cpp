#include <iostream>
using namespace std;

int main() {
  int P1, P2, C1, C2, de, cg;

  cin >> P1 >> C1 >> P2 >> C2;

    de = P1 * C1;
    cg = P2 * C2;

    if(de == cg){
      cout << "0" << endl;
    } else if(de < cg){
      cout << "1" << endl;
    } else {
      cout << "-1" << endl;
    }

  return 0;
}
