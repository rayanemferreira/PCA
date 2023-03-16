#include <stdio.h>
#include <stdlib.h>
// função que recebe um ponteiro e retorna um ponteiro
int *intersecção(int vetor1[], int vetor2[])
{

    int *ptr = malloc(3 * sizeof(int));

    for (int j = 0; j < 3; j++)
    {
        ptr[j] = -1;
    }

    int i = 0, j = 0, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                ptr[i] = vetor1[i];
            }
        }
    }

    return ptr;
}

int main()
{
    int quantidade, i, j, resultado;
    printf("qual é o quantidade de vetores? ");
    scanf("%d", &quantidade);
    int vet1[3], vet2[3];
    for (i = 0; i < 3; i++)
    {
        printf("\ndigite os numeros do conjunto A: %d ", i);
        scanf("%d", &vet1[i]);
    }

    for (j = 0; j < 3; j++)
    {
        printf("\ndigite os numeros do conjunto B %d: ");
        scanf("%d", &vet2[j]);
    }

    int *vetorresul = intersecção(&vet1, &vet2);

    while (quantidade > 2)
    {

        int vetn[3];
        for (i = 0; i < 3; i++)
        {
            printf("\ndigite os numeros do conjunto N %d  ", i);
            scanf("%d", &vetn[i]);
        }
        int *vetorresul = intersecção(&vetorresul, &vetn);
        quantidade--;
    }

    printf("\n os valores que sao iguais são:\n ");

    for (int j = 0; j < 3; j++)
    {
        if (vetorresul[j] > -1)
        {
            printf("%d \n", vetorresul[j]);
        }
    }
}
