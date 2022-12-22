#include <iostream>

using namespace std;

int main() {

    int N, anoes = 0, elfos = 0, humanos = 0, magos = 0, hobbits = 0;
    string pessoa;
    char tipo;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> pessoa >> tipo;

        switch (tipo){

            case 'A':
            anoes++;
            break;

            case 'E':
            elfos++;
            break;

            case 'H':
            humanos++;
            break;

            case 'M':
            magos++;
            break;

            case 'X':
            hobbits++;
            break;
        }
    }

    cout << hobbits << " Hobbit(s)" << endl;
    cout << humanos << " Humano(s)" << endl;
    cout << elfos << " Elfo(s)" << endl;
    cout << anoes << " Anao(oes)" << endl;
    cout << magos << " Mago(s)" << endl;

    return 0;
}
