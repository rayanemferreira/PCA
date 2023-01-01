#include <stdio.h>

int main()
{
    int n=1, cont=0;
    for (n=1; n<=9;n++)
    {
        printf("\n");
        for(cont=1;cont<=10;cont++)
        {

        printf("%d x %d = %d \n",n,cont, n*cont);
        }
    }




    return 0;
}