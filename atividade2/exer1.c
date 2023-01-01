#include <stdio.h>


int main()
{
    int n, i=1, soma = 0; 
    
    while(i <= 5)
    {
        printf("Digite N: ");
        scanf("%d", &n);
        soma = soma + n;
        i++;
}
printf("Soma = %d", soma); 
   
    
    return 0;
}