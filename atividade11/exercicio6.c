#include <stdio.h>
void soma(int a, int b, int vetor1[], int vetor2[])
{

    int i, j, somavet[a];

    if (a != b)
    {
        printf("zero");
    }
    if (a == b)
    {
        for (i = 0; i < a; i++)
        {

            somavet[i] = vetor1[i] + vetor2[i];
        }

        for (i = 0; i < a; i++)
        {
            printf("soma dos numeros %d\n", somavet[i]);
        }
    }
}
int main()
{
    int num, num2, i;
    printf("tamanho do vetor 1: ");
    scanf("%d", &num);

    printf("tamanho do vetor 2: ");
    scanf("%d", &num2);

    int vet[num];
    int vet2[num2];

    for (i = 0; i < num; i++)
    {
        printf("vetor 1: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < num2; i++)
    {
        printf("vetor 2: ");
        scanf("%d", &vet2[i]);
    }

    soma(num, num2, &vet, &vet2);
}