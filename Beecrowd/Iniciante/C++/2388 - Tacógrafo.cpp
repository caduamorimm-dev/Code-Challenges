#include <iostream>
using namespace std;

int main() {
  
  int N, tempo, velocidade, soma = 0;


  cin >> N;

  for (int i = 0; i < N; i++){
    
    cin >> tempo >> velocidade; 

    soma += (tempo * velocidade);

  }
     cout << soma << endl;

  return 0;
}
