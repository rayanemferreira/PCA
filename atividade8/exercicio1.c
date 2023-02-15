#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void maiusculo(char s1[],char s2[])
{
    int i = 0;
    while (s1[i] != '\0')
    {
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; 

}

int main()
{
    char c[10];
    char maiuscula[10];

    char invertida[10];
    printf("digite uma palavra: ");
    scanf("%s", c);
    
    int j = 0;
    for(int i=strlen(c)-1; i>=0;i--) {
        invertida[j] = c[i];
        j += 1;
    }
    
    invertida[j] = '\0';

    printf("string investida: %s\n", invertida); 
    maiusculo(c, maiuscula);
    printf("String maiuscula: %s\n", maiuscula);
    return 0;
}