#include <iostream>

using namespace std;

int main(){

    int preferencia, alcool = 0, gasolina = 0, diesel = 0;

    cin >> preferencia;

    while(preferencia != 4){

        if (preferencia == 1){
            alcool++;
        }else if(preferencia == 2){
            gasolina++;
        }else if(preferencia == 3){
            diesel++;
        }

        cin >> preferencia;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}
