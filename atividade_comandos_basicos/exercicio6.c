#include <stdio.h>
#include <string.h>

int main()
{

    float sal, hora, totsal;

    fflush(stdin);
    printf("qual é o seu salario por hora?\n");
    scanf("%f", &sal);

    fflush(stdin);
    printf("quantas horas vc trabalha no mes?\n");
    scanf("%f", &hora);
    totsal = (sal * hora);

    printf("salario total: %.2f\n", totsal);

    return 0;
}