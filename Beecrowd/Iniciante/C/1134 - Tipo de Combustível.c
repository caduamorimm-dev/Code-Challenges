#include <stdio.h>

int main(){

    int preferencia, alcool = 0, gasolina = 0, diesel = 0;

    scanf("%d", &preferencia);

    while(preferencia != 4){

        if (preferencia == 1){
            alcool++;
        }else if(preferencia == 2){
            gasolina++;
        }else if(preferencia == 3){
            diesel++;
        }

        scanf("%d", &preferencia);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
