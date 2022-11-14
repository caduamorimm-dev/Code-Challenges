#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float N[5];
    float soma;
    float maior = 0, menor = 10;

    for (int i = 0; i < 5; i++){
          cin >> N[i];
      }

    for (int i = 0; i < 5; i++){

        if(N[i] >= maior){

            maior = N[i];
        }

    }

    for (int i = 0; i < 5; i++){

        if(N[i] <= menor){

            menor = N[i];
        }

    }

    for (int i = 0; i < 5; i++){

        soma += N[i];

    }

    soma = soma - menor - maior;

    cout << fixed << setprecision(1);
    cout << soma << endl;

  return 0;
}
