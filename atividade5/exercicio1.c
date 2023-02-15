int contar(int n, int d)
{
    int cont=0;
    while (n > 0){
        if ((n%10)==d)
            cont++;
        n=n/10;
    }
    return cont;
}
int main()
{
    int a,b;
    printf("Digite o primeiro valor:");
    scanf("%d", &a);
    printf("Digite o segundo valor:");
    scanf("%d", &b);
    contar(&a, &b);
   
    

    return 0;
}