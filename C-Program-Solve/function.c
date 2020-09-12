#include<stdio.h>
int evenodd(int n)
{
    if(n%2==0)
    {
        printf("This is even number.");
    }
    else
    {
        printf("This is odd mnumber.");
    }
}
void main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    evenodd(a);
}
