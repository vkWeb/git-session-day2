// Fibonacci
// n =        0 1 2 3 4 5 6
// fib of n = 1 1 2 3 5 8 13

int fibOfN(int n)
{
    if (n == 0 || n == 1)
        return 1;
        
    return fibOfN(n - 1) + fibOfN(n - 2);
}
