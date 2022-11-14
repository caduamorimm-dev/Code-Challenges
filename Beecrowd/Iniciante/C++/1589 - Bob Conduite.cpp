#include <iostream>

using namespace std;

int main(){

    int x,r1, r2, raio;

    cin >> x;

    for(int i = 0; i < x; i++){

        cin >> r1 >> r2;

        raio = r1 + r2;

        cout << raio << endl;

    }

    return 0;
}
