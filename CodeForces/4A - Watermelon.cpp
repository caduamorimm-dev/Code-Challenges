#include <bits/stdc++.h>

using namespace std;

main(){

    int watermelon, result;

    cin >> watermelon;

    result = watermelon % 2;

    if (result != 0 || watermelon == 2){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}

