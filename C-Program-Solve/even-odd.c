#include<stdio.h>
int main()
{
    int x;
    printf("Enter a letter :");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("This is even number.");
    }
    if(x%2!=0)
    {
        printf("This is odd number.");
    }
    return 0;
}
