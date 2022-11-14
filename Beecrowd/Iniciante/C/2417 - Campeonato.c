#include <stdio.h>

int main(){

    int cv, ce, cs, cvitorias, cempates, totalC;
    int fv, fe, fs, fvitorias, fempates, totalF;

    scanf("%d%d%d%d%d%d", &cv, &ce, &cs, &fv, &fe, &fs);

    cvitorias = cv * 3;  
    fvitorias = fv * 3;
    
    cempates = ce * 1;   
    fempates = fe * 1;

    totalC = cvitorias + cempates;
    totalF = fvitorias + fempates;


        if (totalC > totalF){   //vitoria C
            printf("C\n");
        }
        else if (totalF > totalC){   //vitoria F
            printf("F\n");
        }
        else if (totalF == totalC){    //empates C
            if (cs > fs){
                printf("C\n");
            }
            else if (fs > cs){
                printf("F\n");
            }
            else {
                printf("=\n");
            }
        }

    return 0;
}
