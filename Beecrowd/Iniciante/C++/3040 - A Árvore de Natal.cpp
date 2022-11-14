#include <iostream>

using namespace std;

int main(){


    int N, altura, espessura, diametro;

    cin >> N;

    for (int i = 0; i < N; i++){

        cin >> altura >> espessura >> diametro;

        if ((altura >= 200 && altura <= 300) && (espessura >= 50) && (diametro >= 150)){
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }


    return 0;
}
