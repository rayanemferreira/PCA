#include <stdio.h>
#include <string.h>


int main()
{

    int num1;
    float num2, num3,cal1,cal2,cal3;
    
    fflush(stdin);
    printf("primeiro numero?\n");
    scanf("%i", &num1);

    fflush(stdin);
    printf("segundo numero?\n");
    scanf("%f", &num2);

    fflush(stdin);
    printf("terceiro numero?\n");
    scanf("%f", &num3);
    


    cal1=(num1 * 2) + num2/2;
    
    cal2=(num1 *3) + num3;

    cal3= num3 * num3 * num3;

    printf("dobro do primeiro com a metade do segundo %.2f\n", cal1);
    printf("triplo do primeiro com a soma do terceiro: %.2f\n", cal2);
    printf("o terceiro elevado ao cubo: %.2f\n", cal3);


        
    
    return 0;
}