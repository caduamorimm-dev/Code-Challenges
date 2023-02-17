#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    double A, B, C, perimetro, area;

    cin >> A >> B >>C;

       perimetro = A + B + C;
       area = (((A + B) * C)/2);
       
    cout << fixed << setprecision(1);

    if (A < B + C && B < A + C && C < A + B){
      cout << "Perimetro = " << perimetro << endl;
    } else {
       cout << "Area = " << area << endl;
    }

    return 0;
}
