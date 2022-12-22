#include <iostream>

using namespace std;

int main() {

    string paciente, medico;
    int teste1 = 0, teste2 = 0;

    cin >> paciente >> medico;

    for (int i=0; i < paciente.size(); i++){
        teste1++;
    }

    for (int i=0; i < medico.size(); i++){
        teste2++;
    }


    if (teste1 > teste2 || teste1 == teste2){
        cout << "go" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
