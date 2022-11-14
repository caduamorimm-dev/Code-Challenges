#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, cont = 0;
  string a;
  string b;

  cin >> N;

  for (int i = 0; i < N; i++){

    cin >> a;
    cin >> b;

      if (a[i] == b[i]){
            cont++;
      }

  }

  cout << cont << endl;

  return 0;
}
