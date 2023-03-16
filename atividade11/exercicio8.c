#include <stdio.h>
// troca de numero
void verifica(float *a, float *b)
{
    a=5;
    b=9;

   
    printf("o valor foi modificado para = %d\n", a);
   
    printf(" o valor foi modificado para = %d\n", b);
}

int main()
{
    int num1,num2;
    
        printf("Digite um numeros: ");
        scanf("%d", &num1);
        printf("Digite o 2 numeros: ");
        scanf("%d", &num2);

        printf("o numero digitado foi: %d\n",num1);
        printf("o numero digitado foi: %d\n",num2);


    verifica(&num1, &num2);
}