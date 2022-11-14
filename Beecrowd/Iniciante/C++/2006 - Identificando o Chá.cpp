#include <bits/stdc++.h>

using namespace std;

int main(){

    int cha, A,B,C,D,E, cont = 0;

    cin >> cha;
    cin >> A >> B >> C >> D >> E;

    if(A == cha){
        cont = cont + 1;
    }

    if (B == cha){
        cont = cont + 1;
    }

    if (C == cha){
        cont = cont + 1;
    }
    
    if (D == cha){
        cont = cont + 1;
    }

    if (E == cha){
        cont = cont + 1;
    }

    cout << cont << endl;

    return 0;
}
