#include <stdio.h>

int main (){

    int a, b, x, y, tomadas;
    
    scanf("%d%d%d%d", &a,&b,&x,&y);
    
    tomadas = a + b + x + y - 3;
    
    printf("%d\n", tomadas);

return 0;
}
