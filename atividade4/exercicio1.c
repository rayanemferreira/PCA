#include<stdio.h>

int scanIntIntervalo(int x, int y)
{
    printf("Digite o primeiro valor:");
    scanf("%d", &x);
    if (x>0 & x <1000);
    {

    }
    printf("Digite o primeiro valor:");
    scanf("%d", &y);
    if (y>0 & y <1000);
    {
        
    }

}
int absdif(int x, int y)
{
    int resultado;
    resultado= x - y;
    return(resultado);

}


int absdif(int x, int y)
{
    int tot;
    tot= x+y;
    
    return(tot);

}
int main()
{
    int a,b,subtracao;
    printf("Digite o primeiro valor:");
    scanf("%d", &a);
    printf("Digite o segundo valor:");
    scanf("%d", &b);
    subtracao=absdif(a,b);
    printf("o valor da subtraçao é:%d\n",subtracao);
    

    return 0;

    

   
    
}