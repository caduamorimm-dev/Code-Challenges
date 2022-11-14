#include <stdio.h>

int main() {

    int N, i = 0, x = 0;

    for(i = 0; i < 5; i++){
        scanf("%d", &N);

        if (N % 2 == 0){
            x++;
        }
     }
      printf("%d valores pares\n", x);

    return 0;
}
