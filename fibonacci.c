#include <stdio.h>

void fibonacci() {
    int n, i;
    unsigned long long fib1 = 0, fib2 = 1, fib;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for (i = 1; i <= n; ++i) {
        printf("%llu, ", fib1);
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    //return 0;
}

