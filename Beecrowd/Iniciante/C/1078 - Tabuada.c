#include <stdio.h>

int main (){

    int N, soma, i = 0;

    scanf("%d", &N);

     for (i = 1; i <= 10; i++){

          soma = i * N;

          printf("%d x %d = %d\n", i, N, soma);
    }

    return 0;
}
