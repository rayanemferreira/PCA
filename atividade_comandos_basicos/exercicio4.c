
#include <stdio.h>
#include <string.h>

int main()
{

    float num1, PI = 3.14, area;

    fflush(stdin);
    printf("valor do raio?\n");
    scanf("%f", &num1);
    area = num1 * num1 * PI;

    printf("area do circulo: %.2f\n", area);

    return 0;
}