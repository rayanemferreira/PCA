#include<stdio.h>
#include <math.h>

int sol_numero(int *x)
{
    float x,k,comp,arctan,i;
    k=1;
    printf("Digite um numero:");
    scanf("%d", &x);
    comp =pow(*x,k)/k;
        if(comp<0)
        {
            comp * -1;

        }

    for (i=1; i<=x; i+=2)
        arctan= pow(*x,i)/i


}
int main()
{
    float n1, total;
    total=0;
    printf("digite o numero que deseja fazer o fatorial:");
    scanf("%f",&n1);
    total = fatorial(n1);
    printf("o fatorial é %2.f", total);

    
    return 0;
} 
    
  

}

int main()
{
    int a,b,subtracao;
   
    subtracao=absdif(a,b);
    printf("o valor da subtraçao é:%d\n",subtracao);
    

    return 0;

    

   
    
}