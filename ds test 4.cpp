#include <stdio.h>
int main() {
    int n,t1 = 0,t2= 1, next, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else if (n == 1) {
        printf("Fibonacci sequence: %d\n", t1);
    } else {
        printf("Fibonacci sequence: %d, %d", t1,t2);
        for (i = 3; i <= n; ++i) {
            next =t1 + t2;
            printf(", %d", next);
            t1 = t2;
            t2 = next;
        }
        printf("\n");
    }
    return 0;
}
