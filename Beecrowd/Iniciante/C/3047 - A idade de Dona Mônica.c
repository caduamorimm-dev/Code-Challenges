#include <stdio.h>

int main(){

    int M, A, B, idade;


    scanf("%d%d%d", &M, &A, &B);

    if (M >= 40 && M <= 110 && A < M && B < M && A != B) {

        idade = M - (A + B) ;
    }

    if (idade > A && idade > B){

        printf("%d\n", idade);
    }
    else if (A > idade && A > B){

        printf("%d\n", A);
    }
    else if (B > idade && B > A){
    
        printf("%d\n", B);
    }


    return 0;
}
