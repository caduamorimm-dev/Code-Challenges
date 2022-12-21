#include <iostream>

using namespace std;

int main(){

    int teste, a, b, soma;
    string player1, player2, decision1, decision2;

    cin >> teste;

    for (int i = 0; i < teste; i++){
        
        cin >> player1 >> decision1;
        cin >> player2 >> decision2;
        cin >> a >> b;

        soma = a + b;

        if(decision1 == "PAR"){
            
            if (soma % 2 == 0){
                cout << player1 << endl;
            } else {
                cout << player2 << endl;
            }
            
        } else {
            
            if (soma % 2 != 0) {
                cout << player1 << endl;
            } else {
                cout << player2 << endl;
            }
            
        }
    }

    return 0;
}
