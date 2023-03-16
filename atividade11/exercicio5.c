#include <stdio.h>
// maior,menor,medio com ponteiro
void verifica(int a[])
{


    int i, maior = 0, medio = 0, menor = 99999;
    for (i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            maior = a[0];
            menor = a[0];
        }
        if (a[i] > maior)
        {
            maior = a[i];
        }
        if (a[i] < menor)
        {
            menor = a[i];
        }
    }

    for (i = 0; i < 3; i++)
    {

        if (a[i] < maior && a[i] > menor)
        {
            medio = a[i];
        }
    }
    printf(" o maior numero = %d\n", maior);
    printf(" o medio = %d", medio);
    printf(" o menor numero = %d", menor);
}

int main()
{
    int num[3], i;
    for (i = 0; i < 3; i++)
    {
        printf("Digite um numeros: ");
        scanf("%d", &num[i]);
    }

    verifica(&num);
}