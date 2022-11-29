#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, qtd, somaC = 0, somaR = 0, somaS = 0, cobais = 0;
    float percentualC, percentualR, percentualS;
    char animal;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> qtd >> animal;

        switch(animal){

            case 'C':
                somaC += qtd;
                break;
            case 'R':
                somaR += qtd;
                break;
            case 'S':
                somaS += qtd;
                break;

        }

        cobais += qtd;
    }

    cout << "Total: " << cobais << " cobaias" << "\n";
    cout << "Total de coelhos: " << somaC << "\n";
    cout << "Total de ratos: " << somaR << "\n";
    cout << "Total de sapos: " << somaS << "\n";

    percentualC = (float) somaC*100/ cobais;
    percentualR = (float) somaR*100/cobais;
    percentualS = (float) somaS*100/cobais;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualC << " %" << "\n";
    cout << "Percentual de ratos: " << percentualR << " %" << "\n";
    cout << "Percentual de sapos: " << percentualS << " %" << endl;


    return 0;
}
