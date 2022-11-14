#include <iostream>

using namespace std;

int main() {
    
    string estrada;
    int N, result = 0;

    cin >> N;
    cin >> estrada;

    for (int i = 0; i < N; i++){

        if (estrada[i] == 'P'){

            result = result + 2;

        } else if (estrada[i] == 'C'){

            result = result + 2;

        } else if (estrada[i] == 'A'){

            result = result + 1;
        }

    }

    cout << result << endl;

  return 0;
}