#include <stdio.h>

int main()
{
    int m, x, y, conta, valormax = 0, x_max = 0, y_max = 0, n;

    printf("digite o valor de M: ");
    scanf("%d", &m);
    printf("digite o valor de n: ");
    scanf("%d", &n);

    for (x = 0; x <= m; x++)
    {
        for (y = 0; y <= n; y++)
        {
            conta = (x * y) - (x * x) + y;
            printf("(x * y)=%d  - (x * x)= %d + y= %d\n", (x * y), (x * x), y);
            printf("%d\n", conta);

            if (conta > valormax)
            {
                valormax = conta;
                x_max = x;
                y_max = y;
            }
        }
    }
    printf("O valor maximo da expressao xy - x^2 + y, é: %d", valormax);

    return 0;
}
