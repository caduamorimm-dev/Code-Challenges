#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, resposta = 0;
    int notas[101] = {}, aux;

    cin >> N;

    for (int i = 0; i < N; i++){ 
                                
        cin >> aux;

        notas[aux]++;
    }


    for (int i = 0; i < 101; i++){ 

        if (notas[i] >= notas[resposta]){
            resposta = i; 
                         
        }
    }

    cout << resposta << endl;

    return 0;
}
