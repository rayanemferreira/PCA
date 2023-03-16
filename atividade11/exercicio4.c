#include <stdio.h>
main()
{
int v[8];
int i;
for(i=0;i<8;i++)
{
printf("ensira um valor");
scanf("%d",(v+i));
}
for(i=0;i<8;i++)
{
    if(*(v + i)%2==0)
    {
    printf("\nelemento %d do array é %d e seu endereço é %d", i+1, *(v+i), v+i);
    }
    
    
    
}


}