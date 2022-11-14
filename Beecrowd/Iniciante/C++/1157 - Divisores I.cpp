#include <iostream>

using namespace std;

int main() {

    int N, j = 0;

    cin >> N;

    for (int i = 0; i < N; i++){

        j++;

        if (N % j == 0){
            cout << j << endl;
        }

    }

    return 0;
}
