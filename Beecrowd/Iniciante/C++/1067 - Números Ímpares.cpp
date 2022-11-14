#include <bits/stdc++.h>

using namespace std;

int main(){

    int X, i = 0;

    cin >> X;

    for (i = 0; i < X; i++){
        while (i % 2 != 0){
            cout << i << endl;

            i++;
        }

    }

    if (X % 2 != 0){
        cout << X << endl;
    }


    return 0;
}
