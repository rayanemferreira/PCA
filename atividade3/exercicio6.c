#include <stdio.h>


int main()
{
    int n1,i = 1,soma=0;
    printf("digite um numero: ");
        scanf("%d", &n1);
    while (i<n1)
    {
        if (n1%i==0)
        {
            printf("o numero é divisivel por  = %d\n", i);
            soma=soma + i;

        }
       
    
        
        i++;
    }
    printf("a soma dos divisiveis é  = %d\n", soma);
    if (soma==n1)
    {
        printf(" o numero é perfeito\n");
    
    }
    else
    {
        printf(" o numero  NAO é perfeito\n");
    }
    
    return 0;
}