#include <stdio.h>
 
int main() { 
    int km, m;
	
    scanf("%d", &km);
    m = (60 * km) / 30;
    printf("%d minutos\n", m);

    return 0;
}