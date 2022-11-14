#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, chocolate;
    
    cin >> x;
    
    if ((x > 0) && (x <= 1000)){

    for (int i = 0; i < x; i++) {     
      
           cin >> y;

           if ((y >= 2) && (y <= 10)){
           chocolate = y += chocolate;
        }
    }
}

            cout << chocolate - x << endl;

  return 0;

}
