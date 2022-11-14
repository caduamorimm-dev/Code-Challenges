#include <bits/stdc++.h>

using namespace std;

int main()
{

    float N1, N2, N3, N4, exame, media, notafinal;

    cin >> N1 >> N2 >> N3 >> N4;

    media = ((((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)))/10) ;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media > 7.0){

        cout << "Aluno aprovado." << endl;
    }

    if (media < 5.0){
        cout << "Aluno reprovado." << endl;
    }

    if ((media >= 5.0) && (media <= 6.9)){
        cout << "Aluno em exame." << endl;

        cin >> exame;

        cout << fixed << setprecision(1);
        cout << "Nota do exame: " << exame << endl;

        exame = (((media + exame)/2));

        if (exame >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else {

            cout << "Aluno reprovado." << endl;
        }

            cout << "Media final: " << exame << endl;
    }

    return 0;
}
