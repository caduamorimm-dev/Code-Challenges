#include <stdio.h>
 
int main() {
 
    int p1, p2, n1, n2;
    float p1v, p2v, valor;
    
    scanf ("%d %d %f", &p1, &n1, &p1v);
    scanf ("%d %d %f", &p2, &n2, &p2v);
    
    valor = (n1 * p1v) + (n2 * p2v);
    
    printf("VALOR A PAGAR: R$ %.2f\n", valor);
    
 
    return 0;
}