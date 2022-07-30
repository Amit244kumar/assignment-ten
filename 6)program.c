int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial is %d",fact(n));
    getch();
    return 0;

}
int fact(int n)
{
    int i=n-1;
    while(i)
    {
        n=i*n;
        i--;
    }
    return n;
}
