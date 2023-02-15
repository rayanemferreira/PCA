#include <stdio.h>
#include <stdlib.h>

void produtoEscalar(int v[], int v2[], int num)
{

    for (int i = 0; i < num; i++)
    {

        printf(" %d x %d = %d\n ", v[i], v2[i], (v[i] * v2[i]));
    }
}

int main()
{
    int v[100];
    int v2[100];
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

    for (int j = 0; j < num; j++)
    {
        printf("Digite o %d numero: ", j + 1);
        scanf("%d", &v2[j]);
    }

    produtoEscalar(v, v2, num);

    return 0;
}
