#include <iostream>
using namespace std;

int main() {

    int x, o, s, qtdX, qtdO, qtdS;

    cin >> x >> o >> s;

      qtdX = x/2;
      qtdO = o/3;
      qtdS = s/5;

      if(qtdX <= qtdO && qtdX <= qtdS){
        cout << qtdX << endl;
      } else if(qtdO <= qtdX && qtdO <= qtdS){
        cout << qtdO << endl;
      } else if(qtdS <= qtdX && qtdS <= qtdO){
        cout << qtdS << endl;
      }

  return 0;
}
