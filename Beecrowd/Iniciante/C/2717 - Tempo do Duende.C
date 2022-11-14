#include <stdio.h>

int main() {


    int N, A, B, presente;

    scanf("%d%d%d", &N, &A, &B);

    presente = A + B;

    if (presente > N) {
        printf("Deixa para amanha!\n");
    } else {
        printf("Farei hoje!\n");
    }

    return 0;
}
