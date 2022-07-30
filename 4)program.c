int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    Nnumber(n);
    getch();
    return 0;

}
void Nnumber(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }

}
