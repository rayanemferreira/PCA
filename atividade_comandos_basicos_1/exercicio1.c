#include <stdio.h>
#include <stdlib.h>

void main()
{
    int base, altura, area;
    printf("digite a base: \n");
    scanf("%d", &base);
    printf("digite a altura: \n");
    scanf("%d", &altura);

    area = (base * altura)/ 2;

    printf("A �rea do trinagulo �: %d\n", area);

}
