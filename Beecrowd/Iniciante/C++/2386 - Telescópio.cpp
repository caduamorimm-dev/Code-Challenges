#include <iostream>
using namespace std;

int main(){

    long int abertura, estrelas, fotons, j = 0, aux = 0;

    cin >> abertura >> estrelas;

    for (int i = 0; i < estrelas; i++){
      
        cin >> fotons;
        aux = abertura * fotons;

        if (aux >= 40000000){
            j++;
        }
    }

    cout << j << endl;

    return 0;
}
