#include<stdio.h>
int main()
{
    float n;
    int s;
    printf("Enter any number :");
    scanf("%f",&n);
    s=sizeof(n);
    printf("The size of n is :%d",s);
    return 0;
}

