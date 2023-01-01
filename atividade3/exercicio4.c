#include <stdio.h>


int main()
{
    int i, n1,div = 0;

    printf("digite um numero: ");
    scanf("%d", &n1);
    while (n1 <= 0);
  
    for (i = 1; i <= n1; i++) 
    {
    if (n1 % i == 0) 
    { 
    printf("ele é divisivel pelo numeros:%d\n", i);
     div++;
     
    }
    }
    
    if (div == 2)
    printf("O número %d é primo!\n", n1);
    else
    printf("O número %d não é primo!\n", n1);
    printf("pois ele possui somente dois divisores\n");

  return 0;
        

        
    
    return 0;
}
    
    
