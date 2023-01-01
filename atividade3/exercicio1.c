#include <stdio.h>

int main()
{
    int i;
    float y, x1, xi2, e;
    printf("digite um numero: ");
    scanf("%f", &y);
    while (e != 0.1)
    {
        x1 = y / 2;
        printf("%.2f\n", x1);

        xi2 = x1 - (((x1 * x1) - y) / (2 * x1));
        printf("%.2f\n", xi2);
        e = xi2 - x1;
        if (e < 0)
        {

            printf("a raiz aproximada é: %.2f\n", e * -1);
        }
        else
        {

            printf("a raiz aproximada é: %.2f\n", e);
        }

        if (e < 0.1)
        {
            printf("chegou ao objetivo ");
            break;
        }
    }
}