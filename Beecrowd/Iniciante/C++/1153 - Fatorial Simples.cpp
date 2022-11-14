#include <bits/stdc++.h>

using namespace std;

int main(){

  int N, fatorial = 1; 

  cin >> N;

for (int i = 1; i <= N ; i++){

      fatorial = fatorial * i;

}

    cout << fatorial << endl;

    return 0;
}
