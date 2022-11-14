#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cv, ce, cs, cvitorias, cempates, totalC;
    int fv, fe, fs, fvitorias, fempates, totalF;

    cin >> cv >> ce >> cs >> fv >> fe >> fs;

    cvitorias = cv * 3;  
    fvitorias = fv * 3;
    
    cempates = ce * 1;   
    fempates = fe * 1;

    totalC = cvitorias + cempates;
    totalF = fvitorias + fempates;


        if (totalC > totalF){   //vitoria C
        
            cout << "C" << endl;
        }
        else if (totalF > totalC){   //vitoria F
            cout << "F" << endl;
        }
        else if (totalF == totalC){    //empates C
            if (cs > fs){
                cout << "C" << endl;
            }
            else if (fs > cs){
                cout << "F" << endl;
            }
            else {
                cout << "=" << endl;
            }
        }
    

    return 0;
}
