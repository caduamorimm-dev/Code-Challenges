#include <stdio.h>
 
int main() {
 
    double pi, volume, r;
    
    scanf("%lf", &r);
    
    pi = 3.14159;
    
    volume = (4.0/3) * pi * pow (r, 3);
    
    printf ("VOLUME = %.3lf\n", volume);
 
    return 0;
}