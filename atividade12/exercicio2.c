#include<stdio.h>
#include<stdlib.h>
int *lervetor(int tam)
{   int *vetor;
    int i;
    vetor= (int *) malloc(tam *sizeof(int));
    
        for(i=0;i<tam;i++)
        {
        printf("valores: %d: ",i+1);
        scanf("%d",&vetor[i]);

        }
    
    return vetor;

    
}

void verifica(int *vetor,  int auxiliar, int *maior, int *menor)
{
    int i;
    *maior = vetor[0];
    *menor = vetor[0];
        

    for (i = 0; i < auxiliar; i++)
    {
       
        if (vetor[i] > *maior)
        {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor)
        {
            *menor = vetor[i];
        }
    }
    
}
int main()
{
    int *vet, auxiliar;
    int maior, menor;
    printf("tamanho do vetor:");
    scanf("%d", &auxiliar);

    vet=lervetor(auxiliar);
    verifica(vet,auxiliar, &maior, &menor);

    
    printf(" o maior numero = %d\n", maior);
    
    printf(" o menor numero = %d", menor);

    free(vet);
}
