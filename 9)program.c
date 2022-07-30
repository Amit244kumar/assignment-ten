int main()
{
    int n,d;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the digit:");
    scanf("%d",&d);
    if(f1(n,d))
    {
        printf("The number contain the digit");
    }
    else{
         printf("The number does not contain the digit");
    }
    getch();
    return 0;
}
int f1(int a,int b)
{
    int d;
    while(a)
    {
        d=a%10;
        a/=10;
        if(d==b)
            return 1;
    }
    return 0;
}
