#include <stdio.h>

int main()
{
  int n, cateto1, cateto2, hipotenusa;
  int encontrou;

  printf("Digite o comprimento maximo da hipotenusa: ");
  scanf("%d", &n);
  hipotenusa = 1;
  while (hipotenusa <= n)
  {
    encontrou = 0;
    cateto1 = 1;
    while (cateto1 < hipotenusa && !encontrou)
    {
      cateto2 = cateto1;
      while (cateto1 * cateto1 + cateto2 * cateto2 < hipotenusa * hipotenusa)
        cateto2++;
      if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa)
      {
        printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto1, cateto2);
        encontrou = 1;
      }
      cateto1++;
    }
    hipotenusa++;
  }

  return 0;
}