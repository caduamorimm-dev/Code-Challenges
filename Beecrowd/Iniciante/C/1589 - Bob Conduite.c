#include <stdio.h>
int main(){

    int x, r1, r2, raio;

    scanf("%d", &x);

    for(int i = 0; i < x; i++){

        scanf("%d%d", &r1, &r2);

        raio = r1 + r2;

        printf("%d\n", raio);

    }

    return 0;
}
