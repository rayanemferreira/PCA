#include <stdio.h>

int main()
{
    int matriz[2][2];
    int comparador;
    int fila, coluna;
    int soma, colsoma, diagsoma;

    for (fila = 0; fila < 2; fila++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("\nElemento[%d][%d] = ", fila + 1, coluna + 1);
            scanf("%d", &matriz[fila][coluna]);
        }
    }

    soma = 0;
    colsoma = 0;
    for (fila = 0; fila < 2; fila++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            
            if (fila == coluna)
            {
                diagsoma = diagsoma + matriz[fila][coluna];
                printf("soma da diagonal principal: %d\n", diagsoma);
            }

            soma = soma + matriz[fila][coluna];

            colsoma = colsoma + matriz[coluna][fila];
            
        }
        printf("soma da linha %d é %d\n", fila + 1, soma);
        printf("soma da coluna %d é %d\n", coluna, colsoma);          
        


       

        soma = 0;
        colsoma = 0;
    }
    

    
}