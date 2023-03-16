#include<stdio.h>
#include<string.h>
int main() {
    int m;
    m=1;
    int *n1;
    n1= &m;

    float m2;
    m2=0.5;
    float *n2;
    n2=&m2;

    char m3[2] = "r";
    char *n3[2];
    n3[2]=&m3;

    printf("\n valor:%d",*n1);
    printf("\n valor:%f",*n2);
    printf("\n letra:%c",*n3);

    *n1= 2;
    *n2= 9.6;
    *n3[2]= "c";
    printf("\n valor modificado:%d",*n1);
    printf("\n valor modificado:%f",*n2);
    printf("\n letra modificada:%c",*n3);

    
    


    
   



}