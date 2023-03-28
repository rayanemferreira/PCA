#include<stdio.h>
#include<stdlib.h>
int main()
{
    int lin, col, i,j;
    int **matriz1;
    printf("quantidade de linhas da matriz: ");
    scanf("%d",&lin);
    printf("quantidade de coluna da matriz: ");
    scanf("%d",&col);
    matriz1=(int**)malloc(lin*sizeof(int*));
    for (i=0;i<lin; i++)
    {
        *(matriz1+i)=(int*)malloc(col*sizeof(int));
    }

    for (i=0;i<lin; i++)
    {
        for (j=0;j<col; j++)
        {
            printf("valor da matriz linha %d e coluna %d : ",i+1, j+1);
            scanf("%d",&matriz1[i][j]);
        }
    }

    for (i=0;i<lin; i++)
    {
        for (j=0;j<col; j++)
        {
            printf("\n linha %d e coluna %d : %d ",i+1, j+1, matriz1[i][j]);

        }
    }

    for(i=0;i<lin;i++)
    {
        free(*(matriz1+i));
    }

    free (matriz1);




}