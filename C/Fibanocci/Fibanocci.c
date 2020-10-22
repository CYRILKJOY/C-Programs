#include <stdio.h>
int main() {
    int i, j,n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n ");

    for (i = 1; i <= n; ++i) {
        for(j =0; j < t2; j++) {
            printf("*");
        }
        printf("\n");
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

   
}
