
#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, cf;
    printf("digite a base:\n ");
    scanf("%d", &n1);
    printf("\n  digite o expoente: ");
    scanf("%d", &n2);
    cf = (pow(n1, n2));
    printf("A potencia é  = %d\n", cf);

    return 0;
}