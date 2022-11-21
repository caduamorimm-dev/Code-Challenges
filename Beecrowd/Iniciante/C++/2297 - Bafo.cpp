#include <iostream>
using namespace std;

int main(){
    int R, B, A;
    int beto = 0, aldo = 0, j = 0;

    do {
        cin >> R;

        if (R >= 1){

            for (int i = 0; i < R; i++){

                cin >> A >> B;

                if (A >= 0 && A <= 100 && B >= 0 && B <=100){
                    aldo = aldo + A;
                    beto = beto + B;
                }
            }

            j++;

            if(aldo > beto){

                cout << "Teste " << j << endl;
                cout << "Aldo" << endl;
                cout << endl;

            } else if (beto > aldo) {
                cout << "Teste " << j << endl;
                cout << "Beto" << endl;
                cout << endl;
            }
                aldo = 0;
                beto = 0;
        }

    } while(R != 0);

    return 0;
}
