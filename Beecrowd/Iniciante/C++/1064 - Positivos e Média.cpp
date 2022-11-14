#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    float N, media, i = 0, x = 0;
    
    for (i = 0; i < 6; i++){

        cin >> N;

        if (N > 0) {
            media += N;
            x++;
        }    
    }

    cout << x << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << media/x << endl;

    return 0;
}
