#include <stdio.h>
#include <string.h>

int main()
{

    float num1, area;

    fflush(stdin);
    printf("lado do quadrado?\n");
    scanf("%f", &num1);
    area = num1 * num1;

    printf("area do quadrado: %.2f\n", area);
    printf("o dobro da area é: %.2f\n", area * 2);

    return 0;
}