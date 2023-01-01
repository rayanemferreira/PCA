#include <stdio.h>

int main()
{
    int n1, multi, ant, succ, somaImpa = 0;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    multi = n1 * n1 * n1;
    printf("multiplicaçao:%d \n", multi);
    ant = 1;
    succ = 1;
    while (somaImpa != multi)
    {
        if (somaImpa < multi)
        {
            somaImpa = somaImpa + succ;
            printf("numero impar:%d \n", succ);
            succ = succ + 2;

        }
        printf("\n");
        printf("soma dos numeros impares:%d \n", somaImpa);
        
        if (somaImpa >multi)
        {
            somaImpa = somaImpa - ant;
            printf("sera subtraido o numero:%d\n",ant);
            ant = ant + 2;
            printf("passou do valor da multiplicaçao:%d \n", somaImpa);
            
            

        }
        if (somaImpa ==multi)
        {
            
        printf(" chegou ao obejtivo :%d\n",somaImpa);
            

        }
        

    }

    

    return 0;
}