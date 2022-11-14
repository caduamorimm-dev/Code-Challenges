#include <stdio.h>

int main() {


    int code, quantidade;
    double soma;

    scanf("%d%d", &code, &quantidade);

    switch(code){

        case 1:
            soma = quantidade * 4.00;
            printf("Total: R$ %.2lf\n", soma);
            break;

        case 2:
            soma = quantidade * 4.50;
            printf("Total: R$ %.2lf\n", soma);
            break;

        case 3:
            soma = quantidade * 5.00;
            printf("Total: R$ %.2lf\n", soma);
            break;

        case 4:
            soma = quantidade * 2.00;
            printf("Total: R$ %.2lf\n", soma);
            break;

        case 5:
            soma = quantidade * 1.50;
            printf("Total: R$ %.2lf\n", soma);
            break;
    }

    return 0;
}
