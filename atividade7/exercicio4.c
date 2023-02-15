#include <stdio.h>

int main()
{
    int matriz[3][3];
    int comparador;
    int resul[3][3];
    int fila, coluna;

    printf("digite um numero: ");
    scanf("%d", &comparador);

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
            if(comparador==matriz[fila][coluna])
            {
            printf(" seu numero esta localizado na linha %d, e coluna %d",fila+1,coluna+1);
            }
            else
            {
            printf("nao encontrado");
            }

            
        }
    }
}