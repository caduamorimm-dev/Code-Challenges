#include <iostream>

using namespace std;

int main() {
    int nBatalhas;

    int atkD, defD, atkG, defG, bon, golpeD, golpeG, lvD, lvG;

    cin >> nBatalhas;

    while (nBatalhas--) {
        cin >> bon;
        cin >> atkD >> defD >> lvD;
        cin >> atkG >> defG >> lvG;

        golpeD = (atkD + defD) / 2.0;
        golpeG = (atkG + defG) / 2.0;

        golpeD += (lvD % 2 == 0) ? bon : 0;
        golpeG += (lvG % 2 == 0) ? bon : 0;

        if (golpeD > golpeG) {
            cout << "Dabriel" << endl;
        } else if(golpeD < golpeG){
            cout << "Guarte" << endl;
        }else {
            cout << "Empate" << endl;
        }
    }

    return 0;
}
