#include <bits/stdc++.h>

using namespace std;

int main() {

    int c, p, f, folhas;

    cin >> c >> p >> f;

    folhas = p / c;

    if ((folhas == f) || (folhas > f)) {

        cout << "S" << endl;
    }
    
    else{

        cout << "N" << endl;
    }

    return 0;
}
