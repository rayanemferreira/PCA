#include <stdio.h>
// maior,menor, com ponteiro e usando vetor
void verifica(int a[], int b, int c)
{


    int i;
    b = 0, c = 99999;
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            b = a[0];
            c = a[0];
        }
        if (a[i] > b)
        {
            b = a[i];
        }
        if (a[i] < c)
        {
            c = a[i];
        }
    }

   
    printf(" o maior numero = %d\n", b);
   
    printf(" o menor numero = %d", c);
}

int main()
{
    int num[5],maior, menor, i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite um numeros: ");
        scanf("%d", &num[i]);
    }

    verifica(&num, &maior, &menor);
}