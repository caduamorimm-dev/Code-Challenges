#include <bits/stdc++.h>

using namespace std;

int main(){

    int B, G, result;

    cin >> B >> G;

    result = (((G/2) - B));

    if(result > 0){
        cout << "Faltam " << result << " bolinha(s)" << endl;
    } else {
        cout << "Amelia tem todas bolinhas!" << endl;
    }

    return 0;
}
