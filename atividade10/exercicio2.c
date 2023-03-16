#include <stdio.h>

int intersecção(int vetor1[], int vetor2[], int vetorresul[])
{

    int i = 0, j = 0, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                vetorresul[i] = vetor1[i];
                
            }
        }
    }
}

int main()
{
    int v1[3], i, j, acum, resultando;
    int v2[3], vetorresul[3] = {0, 0, 0};
    for (i = 0; i < 3; i++)
    {
        printf("\ndigite os numeros do conjunto A: ");
        scanf("%d", &v1[i]);
    }

    for (j = 0; j < 3; j++)
    {
        printf("\ndigite os numeros do conjunto B: ");
        scanf("%d", &v2[j]);
    }

    resultando = intersecção(&v1, &v2, &vetorresul);
    

    for (int j = 0; j < 3; j++)
    {
        if (vetorresul[j] > 0)
        {
            printf("\n os valores que sao iquais é: %d  ", vetorresul[j]);
        }
    }
}
