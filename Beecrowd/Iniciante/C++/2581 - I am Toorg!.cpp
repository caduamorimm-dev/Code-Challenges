
// utilizando char

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    char toorg[256];
    int N, cont = 0;

    cin >> N;

    for (int i = 0; i < N + 1; i++){

        cin.getline (toorg,256);
        cont++;

    }

    for (int i = 0; i < cont - 1; i++){

        cout << "I am Toorg!" << endl;
    }


    return 0;
}



// utilizando string

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    string toorg;
    int N, cont = 0;

    cin >> N;

    for (int i = 0; i < N + 1; i++){

        getline (cin,toorg);
        cont++;

    }

    for (int i = 0; i < cont - 1; i++){

        cout << "I am Toorg!" << endl;
    }


    return 0;
}

