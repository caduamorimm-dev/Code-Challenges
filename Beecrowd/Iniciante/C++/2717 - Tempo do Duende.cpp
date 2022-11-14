#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, A, B, presente;

    cin >> N >> A >> B;

    presente = A + B;

    if (presente > N) {
        cout << "Deixa para amanha!" << endl;
    } else {
        cout << "Farei hoje!" << endl;
    }


    return 0;
}
