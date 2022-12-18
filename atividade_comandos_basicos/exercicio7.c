#include <stdio.h>
#include <string.h>

int main()
{

    float cel, cel2, fare;

    fflush(stdin);
    printf("temperatura em fahrenheit?\n");
    scanf("%f", &fare);
    cel= 5 * (fare-32);

    cel2= (cel/9);

    printf("grau celsius: %.2f\n", cel2);

    return 0;
}