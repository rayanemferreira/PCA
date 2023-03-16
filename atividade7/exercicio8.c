#include <stdio.h>

int multiplicacao(matriz1,matriz2);
    int matrizC,i,j,linhaA,colunaB;
    
    
    
    
    for(i = 0; i < linhaA; i++) 
    {
		for(j = 0; j < colunaB; j++) {
			
			matrizC[i][j] = 0;
			for(x = 0; x < linhaB; x++) {
				aux +=  matrizA[i][x] * matrizB[x][j];
			}

			matrizC[i][j] = aux;
			aux = 0;
		}
	}
	
	for(i = 0; i < linhaA; i++) {
		for(j = 0; j < colunaB; j++) {
			printf("%6.f", matrizC[i][j]);
		}
		printf("\n\n");
	}

int main()
{
int linha,coluna,lim2,colm2,i,j,elementos;
int m1[10][10], m2[10][10];

    printf("quantas linhas tem sua matriz?" );
    scanf("%d", &linha);
    printf("quantas coluna tem sua matriz?");
    scanf("%d",&coluna);
    printf("quantas linhas tem sua matriz 2?" );
    scanf("%d", &lim2);
    printf("quantas coluna tem sua matriz 2?");
    scanf("%d",&colm2);
    if(coluna!=lim2)
    {
        printf("erro, o programa nao pode ser executado");

    }
    for(i=0;i<=linha;i++)
    {
        for(j=0;j<=coluna;j++)
        {
            printf("elementos da matriz na posiçao [%d][%d]", i,j);
            scanf("%d", &m1[i][j]);

        }
    }

    for(i=0;i<=linha;i++)
    {
        for(j=0;j<=coluna;j++)
        {
            printf("elementos da  2 matriz na posiçao [%d][%d]", i,j);
            scanf("%d", &m2[i][j]);

        }
    }


    for(i=0;i<=linha;i++)
    {   
        printf("\n");
        for(j=0;j<=coluna;j++)
        {
            printf("%d",m1[i][j]);
            
        }
    }










}