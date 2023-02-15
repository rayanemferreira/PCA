#include <stdio.h>

int fibo(int n)
{
    int f1 = 0, f2 = 1, i, total = 0;
    if (n == 1)
        return (0);
    if (n == 2)
        return (1);

    for (i = 3; i <= n; i++)
    {
        total = f1 + f2;
        f1 = f2;
        f2 = total;
    }
    return (total);
}

int main()
{
    int j, n33;
    printf("digite um numero para a sequencia de Fibonacci");
    scanf("%d", &n33);
    for (j = 1; j <= n33; j++)
    {
        printf("%d:  %d\n", j, fibo(j));
    }

    return 0;
}
