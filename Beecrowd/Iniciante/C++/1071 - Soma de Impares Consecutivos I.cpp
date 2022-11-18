#include <bits/stdc++.h>

using namespace std;

int main(){

    int X, Y, soma = 0;

    cin >> X >> Y;


    for(int i = X-1; i>Y ; i--){

        if(i%2 != 0){
            soma = soma + i;

        }
    }

    cout << soma << endl;

return 0;

}
