#include <stdio.h>
#include <math.h>
 
int main() { 
    float a1, b2, c1, d2, distancia;

    scanf("%f %f %f %f", &a1, &c1, &b2, &d2);
	distancia = sqrt(pow((b2 - a1), 2.0) + pow((d2 - c1), 2.0));
    printf("%.4f\n", distancia);

    return 0;
}