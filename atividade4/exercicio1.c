#include<stdio.h>

int scanIntIntervalo(int *x, int *y)
{
    printf("Digite o primeiro valor:");
    scanf("%d", &x);
    printf("Digite o segundo valor:");
    scanf("%d", &y);
    if (x>0 & x <1000);
    {
        return(x);
    }
    
    if (y>0 & y <1000);
    {
        return(y);
    }
  

}
int absdif(int *x, int *y)
{
    int resultado;
    if(x>y)
    {
    

    }
    

    resultado = x - y;
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
   
    subtracao=absdif(a,b);
    printf("o valor da subtraçao é:%d\n",subtracao);
    

    return 0;

    

   
    
}