#include <stdio.h>
 
int main() { 
    int A, B, ABS;

    scanf("%d %d %d", &A, &B, &ABS);
	if (A > B && A > ABS) {
		printf("%d eh o maior\n", A);
	} else if (B > ABS) {
		printf("%d eh o maior\n", B);
	} else {
		printf("%d eh o maior\n", ABS);
	}
	
    return 0;
}