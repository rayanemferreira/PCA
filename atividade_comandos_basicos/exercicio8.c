#include <stdio.h>
#include <string.h>

int main()
{

    float cel, fare2, fare;

    fflush(stdin);
    printf("temperatura em celsius?\n");
    scanf("%f", &cel);
    fare= (cel *9)/5;

    fare2= cel + 32;

    printf("grau fahrenheit: %.2f\n", fare2);

    return 0;
}