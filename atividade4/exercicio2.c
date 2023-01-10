#include<stdio.h>
int main()
{
    int a,b,mult;
    printf("peso da criança :");
    scanf("%d", &a);
    printf("semanas de gestaçoes:");
    scanf("%d", &b);

    if (a <100 || b <28 )
    {
      printf("Parto não deverá ser realizado, reavaliar clinicamente");  
    }
  
    mult= a/4;
    if (a>2500 & mult>7)
    {
      printf("Parto normal");  
    }
    if (a>=2500 & a<=2500 || mult<=7)
    {
      printf("Parto Cesariana");  
    }
    if (a>=1500 & a<=2000 & mult>=9)
    {
      printf("Parto normal");  
    }
    else
    {
        printf("Parto Cesariana");
    }



    
    

    return 0;

    

   
    
}
