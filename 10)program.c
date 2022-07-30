int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    primefactors(n);
    getch();
    return 0;
}

void primefactors(n)
{
    int i,f,p,v;
    v=n;
    for(i=2;i<=n;i++)
    {
      if(n%i==0)//Checking divisi
        ble or not
      {
          f=primeOrNot(i);
          if(f)//Checking  prime number or not
          {
             while(v)
             {
                 if(v%i==0)
                 {
                     printf("%d ",i);
                     v/=i;
                 }
                 else{
                    break;
                 }
             }
          }
      }
      if(!v)
        break;

    }
}

int primeOrNot(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
           return 0;
    }
    return 1;
}
