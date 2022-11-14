#include <iostream>
using namespace std;

int main()
{
    int Jogadas, soma, a, b, j = 1;
    string player1, player2;

    do{

        cin >> Jogadas;
        cin >> player1 >> player2 ;

        if (Jogadas >= 1){

            cout << "Teste " << j++ << endl;

            for (int i = 0; i < Jogadas; i++){

                cin >> a >> b;

                soma = a + b;

                if (soma % 2 == 0){

                    cout << player1 << endl;
                }
                else{
                    cout << player2 << endl;
                }
                    
            }
            
            cout << endl;
        }

    } while(Jogadas != 0);

        return 0;
}
