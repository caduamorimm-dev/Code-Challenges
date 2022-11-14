#include <stdio.h>

int main() {

    int N, X;
    float distancia;

    scanf("%d%d", &N, &X) ;

    distancia = 1.0 * X/(N+2);

    printf("%.2f\n", distancia);


    return 0;
}
