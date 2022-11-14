
#include <stdio.h>
 
int main() {
    
    double km, consumo;
    int h, vm;
    
    
    scanf ("%d%d", &h, &vm);
    
    km = h * vm;
    consumo = km / 12;
    
    printf ("%.3lf\n", consumo);
    
 
    return 0;
}
