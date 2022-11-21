#include <bits/stdc++.h>

using namespace std;

int main(){

    int consumo, valor = 0;

      cin >> consumo;

      if (consumo >= 101){

        valor = valor +  (consumo - 100) * 5;
        consumo = consumo -  (consumo - 100);
      }

      if (consumo >= 31){
          valor = valor +  (consumo - 30) * 2;
          consumo = consumo -  (consumo - 30);
      }

      if(consumo >= 11){
        valor = valor +  (consumo - 10);
        consumo = consumo - (consumo - 10);
      }

      if (consumo < 11){

          valor = valor +  7;

      }

      cout << valor << endl;
      
  return 0; 
}
