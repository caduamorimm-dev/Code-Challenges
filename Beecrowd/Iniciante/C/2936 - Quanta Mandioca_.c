#include <stdio.h>

int main() {

    int mandioca, curupira, boi, boto, mapin, iara;
    int donachica = 250, a = 300, b = 1500, c = 600, d = 1000, e = 150;

    scanf("%d%d%d%d%d", &curupira, &boi, &boto, &mapin, &iara);

    mandioca = ((((curupira * a) + (boi * b) + (boto * c)  + (mapin * d) + (iara * e)) + 225));

    printf("%d\n", mandioca);


    return 0;
}
