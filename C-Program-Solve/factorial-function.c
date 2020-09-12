#include<stdio.h>
int factorial(int n)
{
    int i,f=1;
    if(n==0||n==1)
    {
        printf("The factorial value is :1");
    }
    else
    {
        for(i=1; i<=n; i++)
        f=f*i;
        printf("The factorial value is :%d",f);
    }
}
void main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    factorial(a);
}
