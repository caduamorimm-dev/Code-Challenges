#include <iostream>

using namespace std;

int main(){

    int x, y;

    do{

        cin >> x >> y;

        if (x != y){

            if (x < y) {
                cout << "Crescente" << endl;
            } else{
                cout << "Decrescente" << endl;
            }
        }
    } while(x != y);

    return 0;
}
