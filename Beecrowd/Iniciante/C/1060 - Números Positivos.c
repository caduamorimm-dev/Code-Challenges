#include <stdio.h>

int main() {

    float N;
    int i = 0, x = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &N);

        if (N > 0){
            x++;
        }
      }

      printf("%d valores positivos\n", x);

    return 0;
}
