#include <stdio.h>

int main() {

    int c, p, f, folhas;

    scanf("%d%d%d", &c, &p, &f);

    folhas = p / c;

    if ((folhas == f) || (folhas > f)){

        printf("S\n");
    }

    else{

        printf("N\n");
    }

    return 0;
}
