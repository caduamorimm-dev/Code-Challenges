#include <bits/stdc++.h>

using namespace std;

int main() {

    int codigo1, pecas1, codigo2, pecas2;
    float valor1, valor2, total;

    cin >> codigo1 >> pecas1 >> valor1;
    cin >> codigo2 >> pecas2 >> valor2;

    total = ((pecas1 * valor1) + (pecas2 * valor2));

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}
