#include <bits/stdc++.h>
 
using namespace std;
 
int main (){

 
    int N, i = 0, x = 0;

    for(i = 0; i < 5; i++){
        cin >> N;

        if (N % 2 == 0){
            x++;  
        } 
     }
      cout << x << " valores pares" << endl;
       
    return 0;

   }
