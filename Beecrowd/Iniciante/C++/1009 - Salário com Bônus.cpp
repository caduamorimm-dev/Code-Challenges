#include <bits/stdc++.h>

using namespace std;

int main() {

    char nome[10];
    double salario, vendas;

    cin >> nome >> salario >> vendas;

    salario = (vendas * 0.15) + salario;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salario << endl;


    return 0;
}
