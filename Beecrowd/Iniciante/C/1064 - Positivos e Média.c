#include <stdio.h>

int main() {

    int  x = 0;
    float N, media, i = 0;

    for (i = 0; i < 6; i++){

        scanf("%f", &N);

        if (N > 0) {
            media += N;
            x++;
        }
    }

    printf("%d valores positivos\n", x);
    printf("%.1f\n", media/x);

  return 0;
}
