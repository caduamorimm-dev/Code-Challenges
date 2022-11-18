#include <iostream>

using namespace std;

int main(){

    int N[10];
    int  a, i = 1, j = 0, soma = 1;

    cin >> a;

    cout << "N[" << j << "] " << "= " << a << endl;

    soma = a;

    for(i = 0; i < 9; i++){

        soma *= 2;

        j++;

        cout << "N[" << j << "] " << "= " << soma << endl;

    }

    return 0;
}
