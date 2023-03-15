#include <stdio.h>


int main(){
    double valor1, valor2, valor3, total = 0, mediaponderada = 0;
    int i, numero;

    scanf("%d", &numero);

    for(i = 1; i <= numero; i ++){
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
        total = valor1*2.0 + valor2*3.0 + valor3*5.0;
        mediaponderada = total/10.0;
        printf("%.1f\n", mediaponderada);
    }
    
    return 0;
   }
