#include<stdio.h>
int main()
{
    char n;
    int s;
    printf("Enter any number :");
    scanf("%c",&n);
    s=sizeof(n);
    printf("The size of n is :%d",s);
    return 0;
}

