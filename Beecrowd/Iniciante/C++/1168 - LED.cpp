#include<iostream>

using namespace std;

int main() {

    int n, led = 0;
    string number;

    cin >> n;

    while(n--) {

      cin >> number;

      led = 0;

      for(int i = 0; i < number.size(); i++){

          if(number[i] == '0' || number[i] == '6' || number[i] == '9'){
            led += 6;
          } else if(number[i] == '2' || number[i] == '3' || number[i] == '5'){
            led += 5;
          } else if(number[i] == '4'){
            led += 4;
          } else if(number[i] == '7'){
            led += 3;
          } else if(number[i] == '8'){
            led += 7;
          } else {
            led +=2;
          }
        }

        cout << led << " leds\n";
    }

    return 0;
}
