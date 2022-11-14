#include <bits/stdc++.h>

using namespace std;

int main() {

    double raio, volume;
    cin >> raio;

    volume = (((4/3.0) * 3.14159 * (raio * raio * raio)));

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;


    return 0;
}
