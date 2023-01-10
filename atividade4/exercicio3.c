#include <stdio.h>

int par()
{
    int x = 0, i = 1, continua = 1;

    while (continua)
    {
        printf("Digite um numero :");
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            continua = 0;
        }
    }

    return (x);
}
int vericacaoPerfeito(int x1, int i, int soma)
{
    int ehPerfeito = 0;
    while (i < x1)
    {
        if (x1 % i == 0)
        {
            printf("o numero é divisivel por  = %d\n", i);
            soma = soma + i;
        }

        i++;
    }
    printf("a soma dos divisiveis é  = %d\n", soma);
    if (soma == x1)
    {
        ehPerfeito = 1;
    }
    else
    {
        ehPerfeito = 0;
    }
    return (ehPerfeito);
}

int main()
{
    int resultado, n1, i = 1, soma = 0;
    n1 = par();
    resultado = vericacaoPerfeito(n1, i, soma);
    if (resultado == 1)
    {
        printf("perfeito");
    }
    else
    {
        printf("não é perfeito");
    }
    return 0;
}
