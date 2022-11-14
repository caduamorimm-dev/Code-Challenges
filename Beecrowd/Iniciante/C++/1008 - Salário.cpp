#include <bits/stdc++.h>

using namespace std;

int main() {

      int funcionario, horas;
      float salario, soma;
      cin >> funcionario >> horas >> salario;

      soma = horas * salario;

      cout << "NUMBER = " << funcionario << endl;
      cout << fixed << setprecision(2);
      cout << "SALARY = U$ " << soma << endl;

    return 0;
}
