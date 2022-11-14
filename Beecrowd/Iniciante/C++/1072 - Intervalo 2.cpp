#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, inter, in = 0, out = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++){
        
        cin >> inter;
        
        if (inter >= 10 && inter <= 20){
            in++;
        }else{
            out++;
        }
    }
    
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    
    return 0;
}
