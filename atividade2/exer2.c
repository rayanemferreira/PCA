#include <stdio.h>


int main()
{
    int n, i=1, soma = 0; 
    
    while(i <= 50)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n%2!=0)
        soma = soma + n;
        i++;
}
printf("Soma = %d", soma); 
   
    
    return 0;
}