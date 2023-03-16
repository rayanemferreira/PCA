#include <stdio.h>

int main()
{
    int matriz[3][3];
    int comparador;
    int fila, coluna;
    int soma,colsoma;


    for (fila = 0; fila < 3; fila++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("\nElemento[%d][%d] = ", fila + 1, coluna + 1);
            scanf("%d", &matriz[fila][coluna]);
        }
    }

    soma=0;
    colsoma=0;
    for (fila = 0; fila < 3; fila++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            if(fila==coluna)
            {
            printf("elementos da diagonal principal: %d\n",matriz[fila][coluna]);
            }
            if(fila==0)
            {
            soma= soma + matriz[0][coluna]; 
            }  
            if(coluna==2)
            {
            colsoma= colsoma + matriz[fila][1];
            }
            
        }
    }
    printf("soma da linha é: %d\n",soma);
    printf("soma da coluna 2: %d\n",colsoma);

    for (fila = 0; fila < 3; fila++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
        if(fila!=coluna)
            {
            printf("/n os elementos sem a diag principal: %d\n",matriz[fila][coluna]);
            }
        }
    }
    for(fila = 0; fila < 3; fila++){
        printf(" digonal secundaria é: %d ", matriz[fila ][coluna - 1 - fila]);
    }
    printf("\n\n");
}