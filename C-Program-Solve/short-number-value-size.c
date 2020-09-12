#include<stdio.h>
int main()
{
    short int n,s;
    printf("Enter any number :");
    scanf("%d",&n);
    s=sizeof(n);
    printf("The size of n is :%d",s);
    return 0;
}
