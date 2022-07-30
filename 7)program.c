int main()
{

    int n,r;
    printf("Enter the N items");
    scanf("%d",&n);
    printf("Enter the R items");
    scanf("%d",&r);
    printf("%d",combinationOFR(n,r));
    getch();
    return 0;
}
int combinationOFR(int n,int r)
{
    int d;
    d=n-r;
    return fact(n)/(fact(r)*fact(d));

}
int fact(int n)
{
    int i;
    i=n-1;
    while(i)
    {
        n=n*i;
        i--;
    }
    return n;
}
