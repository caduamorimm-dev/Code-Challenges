#include <iostream>

using namespace std;

int main(){

    int  H, E, A, X, bem;
    int  O, W, mal;

    cin >> H >> E >> A >> O >> W >> X;

    bem = H + E + A;
    mal = O + W;

        if (bem > mal){

            cout << "Middle-earth is safe." << endl;

        } else if (mal > bem || mal == bem){

            bem = bem + X;

            if (bem > mal){

                cout << "Middle-earth is safe." << endl;

            }  else {
                cout << "Sauron has returned." << endl;
            }
        }

    return 0;
}
