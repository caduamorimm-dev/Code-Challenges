#include <stdio.h>

int main(){

    float N1, N2, N3, N4, exame, media, notafinal;

    scanf("%f%f%f%f", &N1, &N2, &N3, &N4);

    media = ((((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)))/10) ;

    printf("Media: %.1f\n", media);

    if (media > 7.0){

        printf("Aluno aprovado.\n");
    }

    if (media < 5.0){
        printf("Aluno reprovado.\n");
    }

    if ((media >= 5.0) && (media <= 6.9)){
        printf("Aluno em exame.\n");

        scanf("%f", &exame);

        printf("Nota do exame: %.1f\n", exame);

        exame = (((media + exame)/2));

        if (exame >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else {

            printf("Aluno reprovado.\n");
        }

            printf("Media final: %.1f\n", exame);
    }

    return 0;
}
