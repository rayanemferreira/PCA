#include <stdio.h>
#include <string.h>


int main()
{


    float num1, num2,soma;
    
    fflush(stdin);
    printf("digite um numero?\n");
    scanf("%f", &num1);

    printf("digite outro numero?\n");
    scanf("%f", &num2);

    soma=num1 + num2;

    printf("O valor da soma é: %.2f\n", soma);

        
    
    return 0;
}