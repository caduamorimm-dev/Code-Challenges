#include <bits/stdc++.h>

using namespace std;

int main(){

    int competidores, pontuacao, x, y, aux = 0, j = 0;

    cin >> competidores >> pontuacao;

    for(int i = 0; i < competidores; i++){

        cin >> x >> y;

        aux = x + y;

        if (aux == pontuacao || aux > pontuacao){
            j++;
        }
    }

    cout << j << endl;

return 0;

}
