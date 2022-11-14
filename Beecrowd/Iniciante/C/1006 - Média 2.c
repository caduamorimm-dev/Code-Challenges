#include <stdio.h>
 
int main() {
 
    float A, B, C;
    double x;
    
    scanf("%f %f %f", &A, &B, &C);
    
    x = (((2 * A) + (3 * B) + (5 * C))/10);
    
    printf ("MEDIA = %.1f\n", x);
 
    return 0;
}
