#include <stdio.h>
 
int main() {
 
    int n, ht;
    double sh, SALARY;
    
    scanf("%d %d", &n, &ht);
    scanf ("%lf", &sh);
    
    SALARY = (ht * sh);
    
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", SALARY);
    
 
    return 0;
}