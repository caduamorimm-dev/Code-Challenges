#include <iostream>
using namespace std;

int main(){

    int x, y;

    cin >> x >> y;

    if (x >= -500 && x <= 500 && y >= -500 && y <= 500){
        if (x >= 0 && x <= 432 && y >= 0 && y <= 468){
            cout << "dentro" << endl;
        } else {
            cout << "fora" << endl;
        }
    }

    return 0;
}