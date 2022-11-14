#include <stdio.h>

int main() {

int T, anos = 0, PA, PB;
    float G1, G2;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)

    {

        scanf("%d%d%f%f", &PA, &PB, &G1, &G2);

        while (PB+1 > PA)
        {

                if (anos > 100){

                break;
            }

            PA = PA + (PA * (G1/100));
            PB = PB + (PB * (G2 /100));


            anos++;

        }

        if (anos <= 100){
            printf("%d anos.\n", anos);
        }
        else{
            printf("Mais de 1 seculo.\n");
        }

        anos = 0;
    }

    return 0;
}
