#include <stdio.h>

float fatorial(float valor)
{
    float i, totalfatorial=1;
    for (i=1; i<=valor; i++)
    {
        if (i!=valor)
        {
            printf("%2.f *", i);

        }   
        else
        {
            printf("%2.f", i);
            printf("\n");
        }
        totalfatorial= totalfatorial * i;
    }
    return totalfatorial;

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