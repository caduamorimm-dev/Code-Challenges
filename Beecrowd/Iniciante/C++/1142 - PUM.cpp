#include <iostream>

using namespace std;

int main() {

    int N, a = 1, b = 2, c = 3;

    cin >> N;

    for (int i = 0; i < N; i++){

        cout << a << " " << b  << " " <<  c << " PUM" << endl;

        a += 4;
        b += 4;
        c += 4;
    }

    return 0;
}
