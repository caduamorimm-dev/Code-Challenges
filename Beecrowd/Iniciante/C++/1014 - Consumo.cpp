#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    float x, y, consumo;
    
    cin >> x >> y;
    
    consumo = x / y;
    
    cout << fixed << setprecision(3);
    cout << consumo <<  " km/l" << endl;
    
    return 0;
}
