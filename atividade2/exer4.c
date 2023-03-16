#include <stdio.h>

int main()
{
    int n, i = 1, maior = 0, menor=0;
    
    while (i <= 3)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (i==1)
        {maior=n;
        menor=n;
        
        }
        if (n> maior)
        {maior= n;
    
        }
        if (n<menor)
        {menor=n;
        
        }
        i++;
    }
    printf(" o maior numero = %d\n", maior);
    printf(" o menor numero = %d", menor);

    return 0;
}