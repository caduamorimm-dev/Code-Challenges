#include <iostream>

using namespace std;

int main() {

    int N, money, gasto = 0, verba = 0;
    char T;

    cin >> N;


    for (int i = 0; i < N; i++){

        cin >> T >> money;

        if (T == 'G'){
            gasto += money;
        } else {
            verba += money;
        }

    }

    if (gasto > verba){
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    } else {
        cout << "A greve vai parar." << endl;
    }

    return 0;
}
