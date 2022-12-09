#include <bits/stdc++.h>

using namespace std;

int main (){


    string cpf;

    cin >> cpf;

    for (int i = 0; i < cpf.length(); i++){

        if (cpf[i] == '.' || cpf[i] == '-'){
            cout << endl;
        } else {
            cout << cpf[i];
        }
    }
        cout << endl;
        
    return 0;
}
