#include <stdio.h>

#include "v2.0.0 helpers.h"

int main(void)
{
    int n = 1;
    printf("n: ");
    scanf("%d", &n);
    printf("Fibonacci of %d = %d", n, fibOfN(n));

    return 0;
}
// fib(6) = 8
// 
