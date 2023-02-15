#include <stdio.h>

int main()
{
    int matriz[3][3];
    int escalar;
    int resul[3][3];
    int fila, coluna;

    printf("digite um numero para multiplicar a matriz: ");
    scanf("%d", &escalar);

    for (fila = 0; fila < 3; fila++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("\nElemento[%d][%d] = ", fila + 1, coluna + 1);
            scanf("%d", &matriz[fila][coluna]);
        }
    }

    for (fila = 0; fila < 3; fila++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            resul[fila][coluna] = matriz[fila][coluna] * escalar;
        }
    }

    for (fila = 0; fila < 3; fila++)
    {
        printf("\n");
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf(" %d", resul[fila][coluna]);
        }
    }

    {

        return 0;
    }
}
