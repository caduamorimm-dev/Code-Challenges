#include <iostream>
#define n 12
using namespace std;

int main(){
    char o;
    cin >> o;

    double m[n][n], soma = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    int aux = 11, cont = 0;
    if(o == 'S'){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < aux; j++){
            soma+= m[i][j];
            cont ++;
            }
        aux--;
        }
        cout << soma << endl;
    }else {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < aux; j++){
            soma+= m[i][j];
            }
        aux--;
        }
        soma = soma/66;
        cout << soma << endl;
    }


    return 0;
}
