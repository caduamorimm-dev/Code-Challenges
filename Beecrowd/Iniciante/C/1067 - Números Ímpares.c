#include <stdio.h>

int main()
{

    int X, i = 0;

    scanf("%d", &X);

    for (i = 0; i < X; i++)
    {
        while (i % 2 != 0)
        {
            printf("%d\n", i);

            i++;
        }

    }

    if (X % 2 != 0){
        printf("%d\n", X);
    }


    return 0;
}
