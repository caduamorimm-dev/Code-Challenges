#include <iostream>
using namespace std;

int main() {
  int N, C, S, E, aux = 0;
  bool verification = false;

  cin >> N >> C;

  for (int i = 0; i < N; i++){

      cin >> S >> E;

      if (S == 0){
        aux = aux + E;
      } else if (S > 0){
        aux = aux - S + E;
      }

      if (aux > C){
        verification = true;
        break;
      } 
  }

    if (verification == false){
      cout << "N" << endl;
    } else {
      cout << "S" << endl;
    }

  return 0;
}

