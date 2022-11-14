#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    float temp, velo, gasto;
    
    cin >> temp >> velo;
    
    
    gasto = (temp * velo) / 12;
    
    cout << fixed << setprecision(3);
    cout << gasto << endl;
 
    return 0;
}
