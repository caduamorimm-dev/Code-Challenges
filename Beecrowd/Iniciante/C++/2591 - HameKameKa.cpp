#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    string hame;
    
    cin >> n;
    
    while(n--){

    int h = 0, k = 0;

    cin >> hame;

      if(hame[0] == 'h'){
       for(int i = 0; i < hame.size(); i++){
            if(hame[i] == 'k'){
                  for(int j = i; j < hame.size(); j++){
                      if(hame[j] == 'a'){
                          k++;
                      }
                }
              break;
            }

            if(hame[i] == 'a'){
                h++;
            }
          }
        }
 
        cout << "k";

        for(int i = 0; i < k * h; i++){
            cout << 'a';
        }   
        
        cout << endl;
    }
   
    return 0;
}
