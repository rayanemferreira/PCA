#include <stdio.h>


int main()
{
    int n1,div, i = 1,tempt=0,tempHr,tempMm,tempSg;

    printf("digite a massa em (g): ");
        scanf("%d", &n1);
    div=n1;
    while (div>=0.5)
    {
        
        div= div/2;
        tempt=tempt + 50;
        printf("quantidade de massa restante:%d gramas.\n",div);
          
        i++;
    }

  printf("\n");
  tempHr = (tempt / 3600);
  tempMm = (tempt % 3600) / 60;
  tempSg = (tempt % 3600) % 60;
  printf("Tempo total: %d horas, %d minutos, %d segundos.", tempHr, tempMm, tempSg);

    
    
}