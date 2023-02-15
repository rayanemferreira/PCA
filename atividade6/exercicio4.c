#include <stdio.h>
#include <stdlib.h>

void imprimirPar(int v[], int num)
{
    int tamPar = 0;

    for (int i = 0; i < num; i++)
    {

        if (v[i] % 2 == 0)
        {

            printf("    %d\n ", v[i]);
        }
    }
}

int main()
{
    int v[100];
    int VetPar[100];
    int num;
    int i;
    printf("Quantidade de numeros: ");
    scanf("%d", &num);
    if (num > 100)
    {
        printf("numero invalido");
        return 0;
    }
    for (i = 0; i < num; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    imprimirPar(v, num);

    return 0;
}
