#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int qtd, code;
    float produto, resultado;

    cin >> qtd;

    for (int i = 0; i < qtd; i++){

        cin >> code >> produto;

        switch(code){

        case(1001):
            produto = produto * 1.50;
            break;

        case(1002):
            produto = produto * 2.50;
            break;

        case(1003):
            produto = produto * 3.50;
            break;

        case(1004):
            produto = produto * 4.50;
            break;

        case(1005):
            produto = produto * 5.50;
            break;

        }

        resultado = resultado + produto;
    }

    cout << fixed << setprecision(2);
    cout << resultado << endl;


    return 0;
}
