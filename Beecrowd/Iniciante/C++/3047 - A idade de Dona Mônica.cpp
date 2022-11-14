#include <iostream>

using namespace std;

int main()
{

    int M, A, B, idade;


    cin >> M >> A >> B;

    if (M >= 40 && M <= 110 && A < M && B < M && A != B) {

        idade = M - (A + B) ;
    }

    if (idade > A && idade > B){

        cout << idade << endl;
    }
    else if (A > idade && A > B){

        cout << A << endl;
    }
    else if (B > idade && B > A){
    
        cout << B << endl;
    }


    return 0;
}
