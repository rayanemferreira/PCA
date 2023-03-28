#include<stdio.h>
#include<stdlib.h>
int main()
{
    int lin, col, i,j;
    double **matriz1,**mat2,**soma;
    printf("quantidade de linhas da matriz: ");
    scanf("%d",&lin);
    printf("quantidade de coluna da matriz: ");
    scanf("%d",&col);
    matriz1=(double**)malloc(lin*sizeof(int*));
    mat2=(double**)malloc(lin*sizeof(int*));
    soma=(double**)malloc(lin*sizeof(int*));
    for (i=0;i<lin; i++)
    {
        matriz1[i]=(double*)malloc(col*sizeof(int));
        mat2[i]=(double*)malloc(col*sizeof(int));
        soma[i]=(double*)malloc(col*sizeof(int));
    }

    for (i=0;i<lin; i++)
    {
        for (j=0;j<col; j++)
        {
            printf("valor da matriz linha %d e coluna %d : ",i+1, j+1);
            scanf("%1f",&matriz1[i][j]);
        }
    }

    for (i=0;i<lin; i++)
    {
        for (j=0;j<col; j++)
        {
            printf("valor da 2 matriz, linha %d e coluna %d : ",i+1, j+1);
            scanf("%1f",&mat2[i][j]);
        }
    }

    for (i=0;i<lin; i++)
    {
        for (j=0;j<col; j++)
        {
            soma[i][j]=matriz1[i][j] + mat2[i][j];
        }
    }

    for (i=0;i<lin; i++)
    {
        for (j=0;j<col; j++)
        {
            printf("%1f", soma[i][j]);

        }
        printf("\n");
    }


   
    for(i=0;i<lin;i++)
    {
        free(matriz1[i]);
        free(mat2[i]);
        free(soma[i]);
    }

    
        free(matriz1);
        free(mat2);
        free(soma);
    




}