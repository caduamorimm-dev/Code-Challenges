#include <iostream>

using namespace std;

int main() {

    int m, n, menor, maior, soma;

    cin >> m >> n;

    while(m > 0 && n > 0){

        if (m < n){
            menor = m;
            maior = n;
        } else {
            menor = n;
            maior = m;
        }

        for(int i = menor; i <= maior; i++){
            cout << i << " ";

            soma += i;
        }
        
        cout << "Sum=" << soma << endl;

        soma = 0;
        cin >> m >> n;
    }
    return 0;
}
