#include <iostream>

using namespace std;

int main() {

    int N, odd;

    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> odd;

        if (odd < 0 && odd % 2 != 0){
            cout << "ODD NEGATIVE" << endl;
        } else if (odd > 0 && odd % 2 != 0){
            cout << "ODD POSITIVE" << endl;
        } else if (odd == 0){
            cout << "NULL" << endl;
        } else if (odd < 0 && odd % 2 == 0){
            cout << "EVEN NEGATIVE" << endl;
        } else if (odd > 0 && odd % 2 == 0){
            cout << "EVEN POSITIVE" << endl;
        }

    }

    return 0;
}
