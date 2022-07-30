float area(int);
int main()
{
    int r;
    printf("Enter the area of a circle");
    scanf("%d",&r);
    printf("%f",area(r));
    getch();
    return 0;
}
float area(int x)
{
    return 3.14*x*x;
}
