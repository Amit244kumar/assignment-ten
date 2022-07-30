int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(EvenOdd(n))
    {
        printf("The number is even");

    }
    else{
        printf("The number is odd");
    }
    getch();
    return 0;
}
int EvenOdd(int n)
{
    if(n&1)
        return 0;
    else
        return 1;
}
