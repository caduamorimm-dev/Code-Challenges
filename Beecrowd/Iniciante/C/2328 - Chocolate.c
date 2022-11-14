#include <stdio.h>

int main(){

    int x, y, chocolate;

    scanf("%d", &x);

    if ((x > 0) && (x <= 1000)){

    for (int i = 0; i < x; i++){

        scanf("%d", &y);

        if ((y >= 2) && (y <= 10)){
        chocolate = y += chocolate;
     }
   }
}

        printf("%d\n", chocolate - x);

    return 0;
}
