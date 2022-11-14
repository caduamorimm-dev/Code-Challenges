#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T, anos = 0, PA, PB;
    float G1, G2;

    cin >> T;

    for (int i = 0; i < T; i++)

    {

        cin >> PA >> PB >> G1 >> G2;

        while (PB+1 > PA)
        {

            if (anos > 100){

                break;
            }

            PA = PA + (PA * (G1/100));
            PB = PB + (PB * (G2 /100));

            anos++;

        }

        if (anos <= 100){
            cout << anos << " anos."<< endl;
        }
        else {
            cout << "Mais de 1 seculo."<< endl;
        }

        anos = 0;
    }

    return 0;
}
