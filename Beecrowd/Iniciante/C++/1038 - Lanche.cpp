#include <bits/stdc++.h>

using namespace std;

int main() {

    int code, quantidade;
    double soma;

    cin >> code >> quantidade;

    switch(code){

        case 1:
            soma = quantidade * 4.00;
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << soma << endl;
            break;

        case 2:
            soma = quantidade * 4.50;
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << soma << endl;
            break;

        case 3:
            soma = quantidade * 5.00;
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << soma << endl;
            break;

        case 4:
            soma = quantidade * 2.00;
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << soma << endl;
            break;

        case 5:
            soma = quantidade * 1.50;
            cout << fixed << setprecision(2);
            cout << "Total: R$ " << soma << endl;
            break;
    }

    return 0;
}
