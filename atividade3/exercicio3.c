#include <stdio.h>

int main()
{
    int n, i = 1, somaImpa = 0, somaPar=0;
    
    while (i <= 5)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n>1000)
        {
            printf(" numero invalido \n");
        }
        if (n<0)
        {
            printf(" numero invalido\n");
        }
        if (n%2!=0 && n>0)
        {somaImpa = somaImpa + n;
    
        }
        if(n%2 == 0 && n>0)
        {somaPar = somaPar + n;
        
        }
        i++;
    }
    printf("a soma dos numeros pares = %d\n", somaPar);
    printf("a soma dos numero impa = %d\n", somaImpa);

    return 0;
}