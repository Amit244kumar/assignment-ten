int Sinterest(int,int,int);
int main()
{
    int r,p,t;
    printf("Enter the rate of interest:");
    scanf("%d",&r);
    printf("Enter the principle:");
    scanf("%d",&p);
    printf("Enter the time:");
    scanf("%d",&t);
    printf("%d",Sinterest(r,p,t));
    getch();
    return 0;
}

int Sinterest(int rate,int principle,int time)
{
    return rate*principle*time/100;
}
