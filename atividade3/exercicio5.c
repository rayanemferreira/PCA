#include <stdio.h>

int main()
{
    int n=1, den=0;
    for (n=1; n<=99;n+=2)
    {
      den=den + 1;
      printf(" %d/%d\n", n,den);  
        
    }
    
     

    return 0;
}