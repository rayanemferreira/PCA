#include <stdio.h>

int main()
{
    int n, i = 1, maior = 0, menor = 999999999;

    while (i <= 4)
    {
        printf("Digite um numero: \n");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("numero invalido!!! \n");
        }

        if (n > maior)
        {
            maior = n;
        }
        if (n < menor && n > 0)
        {
            menor = n;
        }
        i++;
    }
    printf(" o maior numero = %d\n", maior);
    printf(" o menor numero = %d", menor);

    return 0;
}