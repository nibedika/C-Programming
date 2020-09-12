#include<stdio.h>
int main()
{
    double n;
    int s;
    printf("Enter any number :");
    scanf("%lf",&n);
    s=sizeof(n);
    printf("The size of n is :%d",s);
    return 0;
}

