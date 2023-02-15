#include<stdio.h>
#include <math.h>

int main()
{
    int x,k,comp,arctan,i,acm;
    k=1;
    acm=0;
    printf("Digite um numero:");
    scanf("%d", &x);
  
    for (i=1; i<=x; i+=2)
    {
        arctan=pow(x,i)/i;
        acm=acm+arctan;

        printf("%d %d\n",x,i);
        printf("%d\n",acm);
    }
    return 0;

    


    
}