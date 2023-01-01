#include <stdio.h>

int main()
{
    int n1,n2,n3,media,i = 1, maiorn1 = 0, menorn1 = 999999999;
    int maiorn2 = 0, menorn2 = 999999999,maiormed = 0, menormed = 999999999;
    int maiorn3 = 0, menorn3 = 999999999;

    
    while (i <= 3)
    {
        printf("Primeira nota: ");
        scanf("%d", &n1);
        printf("segunda nota: ");
        scanf("%d", &n2);
        printf("terceira nota: ");
        scanf("%d", &n3);

        
    
    if (n1> maiorn1)
        {maiorn1= n1;
    
        }
        if (n1<menorn1)
        {menorn1=n1;
        }
    if (n2> maiorn2)
        {maiorn2= n2;
    
        }
        if (n2<menorn2)
        {menorn2=n2;
        }
    if (n3> maiorn3)
        {maiorn3= n3;
    
        }
        if (n3<menorn3)
        {menorn3=n3;
        }
        media=(n1 + n2 + n3)/3;
        if (media>maiormed)
        {maiormed = media;
        }
        if (media<menormed)
        {menormed = media;
        }


        

        i++;
    }
    printf(" o maior nota da ap1 foi = %d\n", maiorn1);
    printf(" o menor nota da ap1 foi = %d\n", menorn1);
    printf(" o maior nota da ap2 foi = %d\n", maiorn2);
    printf(" o menor nota da ap2 foi = %d\n", menorn2);
    printf(" o maior nota da ap3 foi = %d\n", maiorn3);
    printf(" o menor nota da ap3 foi = %d\n", menorn3);
    printf(" o maior media foi = %d\n", maiormed);
    printf(" o menor media foi = %d\n", menormed);

    return 0;
}