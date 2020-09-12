#include<stdio.h>
int leapyear(int n)
{
    if(n%4==0||n%100==0||n%400)
    {
        printf("This is leap year.");
    }
    else
    {
        printf("This is not leap year.");
    }
}
void main()
{
    int a;
    printf("Enter a year :");
    scanf("%d",&a);
    leapyear(a);
}
