#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, X;
    float distancia;

    cin >> N >> X;

    distancia = 1.0 * X/(N+2);

    cout << fixed << setprecision(2);
    cout << distancia << endl;

    return 0;
}
